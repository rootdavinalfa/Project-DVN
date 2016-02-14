#include<conio.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i,n,a,b;
    
    for(i=1;i<=5;i++)
    {
        int a=i;
        cout<<i;
        if(i>1)
        {
        for(n=2;n<=i;n++)
        {
            a=a+3;
            cout<<setw(4)<<a;
        }
    }
        cout<<endl;
    }
    getch();
}
