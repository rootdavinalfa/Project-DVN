#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

void setcolor(unsigned short color){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}

int main(int argc, char *argv[]){
   int x=0;
        do{
            x++;
            setcolor(x);
            cout<<x<<" ";}
        while(x!=1024);
        system("pause");
}
