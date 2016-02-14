#include <cstdlib>
#include <iostream>
#include "SDL/SDL.h"
#include "SDL/SDL_opengl.h"

/*DVN LABS 2015
VAPZ 2015
First OpenGL game by Davin
GNU LICENSE for educational purpose
This project compiled using mingw 32bit with SDL 1.2 binaries and OpenGL engine*/
using namespace std;

int main(int argc, char *argv[])
{
    //SDL Init
    SDL_Init(SDL_INIT_EVERYTHING);
    
    //SDL Framebuffer
    SDL_GL_SetAttribute ( SDL_GL_RED_SIZE,8);
    SDL_GL_SetAttribute ( SDL_GL_GREEN_SIZE,8);
    SDL_GL_SetAttribute ( SDL_GL_BLUE_SIZE,8);
    SDL_GL_SetAttribute ( SDL_GL_ALPHA_SIZE,8);
    SDL_GL_SetAttribute ( SDL_GL_BUFFER_SIZE,32);
    SDL_GL_SetAttribute ( SDL_GL_DEPTH_SIZE,16);
    SDL_GL_SetAttribute ( SDL_GL_DOUBLEBUFFER,1);
    
    //Title caption
    SDL_WM_SetCaption("MariOza",NULL);
    //Window preferences
    SDL_SetVideoMode(600,600,32,SDL_OPENGL);
    //Specific for clear color
    glClearColor(1,1,1,1);//Merah,Hijau,biru,alpha
    glViewport(0,0,600,600);
    //Shader model
    glShadeModel(GL_SMOOTH);

    //EVENT handler
    SDL_Event event;
    
    //2D projection
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glDisable(GL_DEPTH_TEST);
    cout<<"OpenGL is running";
    
    //Handles main loop
    bool isRunning=true;
    
    while(isRunning)
    {
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
        }
    }
    
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPushMatrix();
    glOrtho(0,600,400,0,-1,1); //Set the matrix
    
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
    glEnd();
    glPopMatrix();
    //
    SDL_GL_SwapBuffers();
    
    SDL_Delay(1);
    
    SDL_Quit();
    return 0;
}
