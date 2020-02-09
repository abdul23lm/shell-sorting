#include <iostream>
using namespace std;

int main()
{
    int array[5];
    int length=5;
    int i,j,d;
    int tmp,flag;
    cout<<"*======================================Tugas Praktikum Sorting======================================*"<<endl;
    cout<<" Struktur Data & Pemrograman"<<endl;
    cout<<" Latihan 3 - Shell Sorting"<<endl;
    cout<<" Created By Abdul Latif Munjiat (1610631170004)"<<endl;
    cout<<" Kelas 3'A Fasilkom Unsika\n"<<endl;
    for (i=0;i<length;i++)
    {
        cout<<"Enter a Number : ";
        cin>>array[i];
    }
    d=length;
    flag=1;

    flag=1;
    while(flag||(d>1))
    {
        flag=0;
        d=(d+1)/2;
        for (i=0;i<(length-d);i++)
        {
            if (array[i+d]>array[i])
            {
                tmp=array[i+d];
                array[i+d]=array[i];
                array[i]=tmp;
                flag=1;
            }
        }
    }
    cout<<endl;
    for (i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
}
