#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[])
{
    int grade;
    cout<<"Masukkan total nilai sikap siswa= ";cin>>grade;
    if(grade<40)
    {
        cout<<"Grade: "<<" D ";   
    }
    if(grade>=40&&grade<=60)
    {
        cout<<"Grade: "<<" C "; 
    }
    if(grade>=61 && grade<=80)
    {
        cout<<"Grade: "<<" B "; 
    }
    if(grade>=81 && grade<= 100)
    {
        cout<<"Grade: "<<" A "; 
    }
    getch();
}
