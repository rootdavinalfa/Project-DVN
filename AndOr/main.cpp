#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char var;
    cout<<"Masukkan variabel: ";cin>>var;
    if((var>='A')&&(var<='Z')||(var>='a')&&(var<='z'))
    cout<<"Variabel "<<var<<" adalah karakter";
    else
    cout<<"Variabel "<<var<<" adalah numerik";
    getch();
}
