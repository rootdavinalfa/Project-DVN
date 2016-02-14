#include <cstdlib>
#include <iostream>
#include "SDL/SDL.h"
#include "SDL/SDL_opengl.h"
#include "SDL/SDL_image.h"
#include <string>
/*DVN LABS 2015
VAPZ 2015
First OpenGL game by Davin with redistribute code from Luka Horvat
GNU LICENSE for educational purpose
This project compiled using mingw 32bit with SDL 1.2 binaries and OpenGL engine*/
using namespace std;

//Function for loading an image into an texture
GLuint loadTexture( const string &fileName )
{
  SDL_Surface *image = IMG_Load( fileName.c_str() );

  SDL_DisplayFormatAlpha(image);

  unsigned object(0);

  glGenTextures(1, &object);
  
  glBindTexture(GL_TEXTURE_2D, object);

  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image->w, image->h, 0, GL_RGBA, GL_UNSIGNED_BYTE, image->pixels);
  
  //Free surface
  SDL_FreeSurface(image);
  
  return object;
}   

bool CheckCollision(float Ax,float Ay,float Aw,float Ah,float Bx,float By,float Bw,float Bh)
{
    if(Ay+Ah<By) return false;
    else if (Ay>By+Bh) return false;
    else if (Ax+Aw<Bx) return false;
    else if (Ax>Bx+Bw) return false;
    return true;
}

struct Brick
{
    float x;
    float y;
    float width;
    float height;
    bool aktif;
};

int main(int argc, char *argv[])
{
    //Initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);
    
    //Set OpenGL memory usage
    SDL_GL_SetAttribute ( SDL_GL_RED_SIZE,8);
    SDL_GL_SetAttribute ( SDL_GL_GREEN_SIZE,8);
    SDL_GL_SetAttribute ( SDL_GL_BLUE_SIZE,8);
    SDL_GL_SetAttribute ( SDL_GL_ALPHA_SIZE,8);
    SDL_GL_SetAttribute ( SDL_GL_BUFFER_SIZE,32);
    SDL_GL_SetAttribute ( SDL_GL_DEPTH_SIZE,16);
    SDL_GL_SetAttribute ( SDL_GL_DOUBLEBUFFER,1);
    
    //Title caption
    SDL_WM_SetCaption("VAPZ | OGL 1",NULL);
    //Window preferences
    SDL_SetVideoMode(600,400,32,SDL_OPENGL);
    //Specific for clear color
    glClearColor(1,1,1,1);//Merah,Hijau,biru,alpha
    glViewport(0,0,600,400);
    //Shader model
    glShadeModel(GL_SMOOTH);
    
    //2D projection
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glDisable(GL_DEPTH_TEST);
    cout<<"OpenGL is running";
    
    //Handles the main loop
    bool isRunning=true;
    bool isEscaped=true;
    //For handling event
    SDL_Event event;

    //The rectangles variable
    float myX=300;
    float myY=380;
    float width=80;
    float height=10;
    bool left=false,right=false;

    //The ball variable
    float ballX=50;
    float ballY=350;
    float ballWH=30;
    float vellX=0.25;
    float vellY=-0.25;

    //Brick elements
    const static int BRICKS=54;
    Brick bricks[BRICKS];
    bricks[0].x=10;
    for(int n=0,x=5,y=10;n<BRICKS;n++,x+=66)
    {
        if(x>560)
        {
            x=4;
            y+=25;
        }
        bricks[n].x=x;
        bricks[n].y=y;
        bricks[n].width=60;
        bricks[n].height=20;
        bricks[n].aktif=true;
    }
        unsigned int pad_texture=0;
        pad_texture=loadTexture("test.png");
        cout<<pad_texture<<endl;
    
    //Main game loop
    while(isRunning)
    {
    //EVENTS
        while(SDL_PollEvent(&event))
            {
                //If windows has closed
            if (event.type==SDL_QUIT)
            {
                isRunning=false;
            }
            //If button released and escaped
            if(event.type==SDL_KEYUP&&event.key.keysym.sym==SDLK_ESCAPE)
            {
                isRunning=false;
            }
            if(event.type==SDL_KEYDOWN)
            {
                if(event.key.keysym.sym==SDLK_LEFT)
                {
                    left=true;
                }
                else if(event.key.keysym.sym==SDLK_RIGHT)
                {
                    right=true;
                }
            }
            else if(event.type=SDL_KEYUP)
            {
                if(event.key.keysym.sym==SDLK_LEFT)
                {
                    left=false;
                }
                else if(event.key.keysym.sym==SDLK_RIGHT)
                {
                    right=false;
                }
            }
    }
    
    //LOGIC section
    //MOVEMENT PAD
    if(left==true)
    {
        myX -=0.5;
    }
    if(right==true)
    {
        myX +=0.5;
    }
    if(myX < 0)
    {
        myX=0;
    }
    if(myX+width > 600)
    {
        myX=600-width;
    }
    
    //BallLogic
    ballX+=vellX;
    ballY+=vellY;
    for(int n=0; n<BRICKS;n++)
    {
        if(bricks[n].aktif==true)
        {
           if(CheckCollision(ballX,ballY,ballWH,ballWH,bricks[n].x,bricks[n].y,bricks[n].width,bricks[n].height)==true)
            {
             vellX=-vellX;
             bricks[n].aktif=false;
             break;
            }
        }
    }
    ballY+=vellY;
    for(int n=0; n<BRICKS;n++)
    {
        if(bricks[n].aktif==true)
        {
           if(CheckCollision(ballX,ballY,ballWH,ballWH,bricks[n].x,bricks[n].y,bricks[n].width,bricks[n].height)==true)
            {
             vellY=-vellY;
             bricks[n].aktif=false;
             break;
            }
        }
    }
    
    if(ballX<0)
    {
        vellX=-vellX;
    }
    else if(ballX+ballWH>600)
    {
        vellX=-vellX;
    }
    if(ballY<0)
    {
        vellY=-vellY;
    }
    else if(ballY+ballWH>400)
    {
        isRunning= false;//Game over when ball is outs
        //vellY=-vellY; for loop
    }
    if(CheckCollision(ballX,ballY,ballWH,ballWH,myX,myY,width,height)==true)
    {
        vellY=-vellY;
    }
    
    //Rendering
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPushMatrix();//Start phase
    
    glOrtho(0,600,400,0,-1,1); //Set the matrix  
    
    //Rectangles pad
    glColor4ub(255,255,255,255);//white
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,pad_texture);
    glBegin(GL_QUADS);
     glTexCoord2d(0,0);glVertex2f(myX,myY);
     glTexCoord2d(1,0);glVertex2f(myX+width,myY);
     glTexCoord2d(1,1);glVertex2f(myX+width,myY+height);
     glTexCoord2d(0,1);glVertex2f(myX,myY+height);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    //Ball
    glColor4ub(255,0,0,255);
    glBegin(GL_QUADS);
    glVertex2f(ballX,ballY);
    glVertex2f(ballX+ballWH,ballY);
    glVertex2f(ballX+ballWH,ballY+ballWH);
    glVertex2f(ballX,ballY+ballWH);
    glEnd();
    
    //Bricks
    glColor4ub(0,0,255,255);
    glBegin(GL_QUADS);
    for(int n=0; n<BRICKS;n++)
    {
        if(bricks[n].aktif==true)
        {
        if(n%2==0)glColor4ub(0,0,0,255);
        else glColor4ub(0,0,255,255);
        glVertex2f(bricks[n].x,bricks[n].y);
        glVertex2f(bricks[n].x+bricks[n].width,bricks[n].y);
        glVertex2f(bricks[n].x+bricks[n].width,bricks[n].y+bricks[n].height);
        glVertex2f(bricks[n].x,bricks[n].y+bricks[n].height);
        }
    }
    glEnd();
    /* GL drawing
    glColor4ub(255,0,0,255);//Red
    glBegin(GL_QUADS);//GL_POINTS , GL_LINES , GL_LINE_STRIP , GL_LINE_LOOP ,GL_QUADS , GL_TRIANGLES , GL_POLIGON
    glVertex2f(5,5);//Start top left
    glVertex2f(595,5);//end bottom right
    glColor4ub(0,255,0,255);
    glVertex2f(595,395);
    glVertex2f(5,395);
    glEnd();//Ending drawing
    glColor4ub(0,0,0,255);//Black
    glBegin(GL_LINES);
    glVertex2f(5,5);
    glVertex2f(595,395);
    glVertex2f(595,5);
    glVertex2f(5,395);
    glEnd();*/
    glPopMatrix();//end
    
    SDL_GL_SwapBuffers();
    
    SDL_Delay(1);
    }
    SDL_Quit();
    return 0;
}
