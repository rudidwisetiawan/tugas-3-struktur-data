#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    struct data
    {
        char nama[20];
        int nim;
        int tugas;
        int kuis;
        int mid;
        int uas;
        float nilai_akhir;
    };struct data mhs[20];

cout<<"-------------------------------------------------\n";
cout<<" Structur Menghitung Nilai Akhir mhs\n";
cout<<"-------------------------------------------------\n";
int x,y;
cout<<"Masukan Banyak Data mhs : ";
cin>>y;
for(x=0;x<y;x++)
{
	cout<<"------------------------------\n";
	cout<<"------------------------------\n";
    cout<<"Masukan Nama Mahasiswa : ";
    cin>>mhs[x].nama;
    cout<<"Masukan NIM Mahasiswa  : ";
    cin>>mhs[x].nim;
    cout<<"Masukan Nilai Tugas    : ";
    cin>>mhs[x].tugas;
    cout<<"Masukan Nilai Kuis     : ";
    cin>>mhs[x].kuis;
    cout<<"Masukan Nilai UTS      : ";
    cin>>mhs[x].mid;
    cout<<"Masukan Nilai UAS      : ";
    cin>>mhs[x].uas;
    cout<<endl;
}
	cout<<"-----------------Data Nilai Mahasiswa-----------------\n";
	cout<<endl<<endl;
for(x=0;x<y;x++)
{
    mhs[x].nilai_akhir = (mhs[x].tugas*10/100)+(mhs[x].kuis*20/100)+(mhs[x].mid*30/100)+(mhs[x].uas*40/100);
	cout<<"Nama			= "<<mhs[x].nama<<			"\n";
	cout<<"NIM			= "<<mhs[x].nim<<				"\n";
	cout<<"Tugas			= "<<mhs[x].tugas<<			"\n";
	cout<<"Kuis			= "<<mhs[x].kuis<<			"\n";
	cout<<"UTS			= "<<mhs[x].mid<<				"\n";
	cout<<"UAS			= "<<mhs[x].uas<<				"\n";
	cout<<"Nilai Akhir		= "<<mhs[x].nilai_akhir;
 mhs[x].nilai_akhir=(mhs[x].tugas*10/100)+(mhs[x].kuis*20/100)+(mhs[x].mid*30/100)+(mhs[x].uas*40/100);
if (mhs[x].nilai_akhir>=85)
    cout<<" (A)";
else if (mhs[x].nilai_akhir>=70)
    cout<<" (B)";
else if (mhs[x].nilai_akhir>=55)
    cout<<" (C)";
else if (mhs[x].nilai_akhir>=40)
    cout<<" (D)";
else if (mhs[x].nilai_akhir<=40)
    cout<<" (E)";
cout<<endl<<endl;
}
}
