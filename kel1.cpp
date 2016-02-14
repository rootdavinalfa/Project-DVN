#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int pokok=5000000;
    int i,j,bunga,saldo,e;
    
    for(i=1;i<=8;i++)
    {
        bunga=pokok*10/100;
        saldo=bunga+pokok;
        cout<<saldo;
    }
    getch();
}
