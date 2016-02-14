#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
/*
Subroutine program example's by Davin Alfarizky Putra Basudewa
DVNLabs
GNU Public License
*/
int main();
void exit();

void ganjil()
{
    int deret,ganjil,i;
    char pil_gnj;
    system("cls");
    cout<<"Menampilkan bilangan ganjil\n";
    cout<<"Inputkan batas deret: ";cin>>deret;
    cout<<"\nHasil deret adalah: ";
    for(i=1;deret>=i;i+=2)
    {
        cout<<i<<" ";
    }
    cout<<"\nKembali ke menu? y/n: ";cin>>pil_gnj;
    switch(pil_gnj)
    {
        case 'y':
            main();
        case 'n':
            exit();
    }
    getch();
    
}

void genap()
{
    int deret,i;
    char pil_gnp;
    system("cls");
    cout<<"Menampilkan bilangan genap\n";
    cout<<"Inputkan batas deret: ";cin>>deret;
    cout<<"\nHasil deret adalah: ";
    for(i=0;deret>=i;i+=2)
    {
        cout<<i<<" ";
    }
    cout<<"\nKembali ke menu? y/n: ";cin>>pil_gnp;
    switch(pil_gnp)
    {
        case 'y':
            main();
        case 'n':
            exit();
    }
    getch();
    
}
void suhu()
{
    system("cls");
    char pil_sh;
    float suhu,f,u,c,k;
    cout<<"Inputkan suhu celcius: ";cin>>suhu;
    f=9/5*(suhu+32);
    u=0.8*suhu;
    c=suhu;
    k=(5/5*suhu)+273;
    cout<<c<<" celcius "<<f<<" Fahrenheit\n";
    cout<<c<<" celcius "<<u<<" Reamur\n";
    cout<<c<<" celcius "<<k<<" Kelvin\n";
    cout<<"Kembali ke menu? y/n: ";cin>>pil_sh;
    switch(pil_sh)
    {
        case 'y':
            main();
        case 'n':
            exit();
    }
    getch();
    getch();
}
void exit()
{
    int i;
    for(i=5;i>=1;i--)
    {
        system("cls");
        cout<<"Terminating in..... "<<i;
        Sleep(1000);
    }
    exit(1);
}
int main()
{
    int pil;
    system("cls");
    cout<<"Menu Pilihan\n";
    cout<<"1.Menampilkan deret ganjil\n";
    cout<<"2.Menampilkan deret genap\n";
    cout<<"3.Konversi suhu\n";
    cout<<"4.Exit\n";
    cout<<"Inputkan pilihan: ";
    cin>>pil;
    switch(pil)
    {
        case 1:
            ganjil();
            break;
        case 2:
            genap();
            break;
        case 3:
            suhu();
        case 4:
            exit();
    }
    getch();
}
