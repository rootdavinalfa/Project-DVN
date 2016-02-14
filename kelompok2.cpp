#include <conio.h>
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    int i,j,a;
    b:
    system("cls");
    cout<<"Masukkan jumlah baris kebawah: ";cin>>a;
    cout<<endl;
    a=a-1;
    for(i=0;i<=a;i++)
    {
        cout<<"*";
        if(i>=1)
        {
            for(j=1;j<=i;j++)
            {
                cout<<setw(4)<<"*";
            }
        }
        cout<<endl;
    }
    getch();
    goto b;
}
