#include <cstdlib>
#include <iostream>
#include<conio.h>
/*VAPz studios
Pointer*/
using namespace std;

void setcolor(unsigned short color)
int main(int argc, char *argv[])
{
    int x;
    int *xPtr;
    xPtr=&x;
    cout<<"Masukkan nilai: ";cin>>x;
    cout<<"================\n";
    cout<<"Nilai"<<*xPtr<<"Terletak pada alamat "<<xPtr;
    getch();
}
