#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    int a=1;
    int b,c,d,e,f;
    int z=3;
    
    cout<<a<<endl;
    for(b=2;b<=5;b+=z)
    {
        cout<<b<<setw(4);
        if(b>=5)
        {
            cout<<setw(0)<<endl;
            goto c;
        }
    }
    c:
    for(c=3;c<=9;c+=z)
    {
        cout<<c<<setw(4);
        if(c>=9)
        {
            cout<<setw(0)<<endl;
            goto d;
        }
    }
    d:
    for(d=4;d<=13;d+=z)
    {
        cout<<d<<setw(4);
        if(d>=13)
        {
            cout<<setw(0)<<endl;
            goto e;
        }
    }
    e:
    for(e=5;e<=17;e+=z)
    {
        cout<<e<<setw(4);
    }
    //
getch();  
}
