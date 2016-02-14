#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>

/*NILAI*/
using namespace std;

struct nilai{
    int program;
    int siskom;
    int indo;
};
struct nama{
    char depan[30];
    char belakang[30];
};
struct siswa{
    nama nm;
    int nilai;
    char nis;
};
    
int main()
{
    siswa sw;
    int i,j;
    cout<<"Selamat datang di program pemungutan nilai."<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Masukkan nama depan siswa: ";cin.getline(sw.nm.depan,30);
    cout<<"Masukkan nama belakang siswa: ";cin.getline(sw.nm.belakang,30);
    cout<<"Masukkan NIS siswa: ";cin>>sw.nis;
    cout<<"==========================================="<<endl;
    cout<<"Nama siswa: "<<sw.nm.depan<<" "<<sw.nm.belakang<<endl;
    cout<<"NIS siswa: "<<sw.nis;
    cout<<"==========================================="<<endl;
    cout<<"| NO |        MAPEL      |     NILAI      |"<<endl;
    getch();
}
