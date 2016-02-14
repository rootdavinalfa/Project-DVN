#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i;
    int bunga,jumlah;
    for(i=1;i<=8;i++)
    {
        int pokok=5000000;
        jumlah=pokok;
        cout<<jumlah;
        a:
            bunga=jumlah*10/100;
            jumlah=bunga+jumlah;
            cout<<jumlah;
            goto a;        
        cout<<endl;
    }
getch();
}
