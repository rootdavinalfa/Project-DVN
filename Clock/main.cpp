#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    int sec,min,hour;
    for(hour=0;hour<60;hour++)
    {
        for(min=0;min<60;min++){
            for(sec=0;sec<60;sec++){
        system("cls");
        cout<<hour<<":"<<min<<":"<<sec<<endl;
        Sleep(1000);//1000 milisecond
        }
        }
    }
    getch();
}

