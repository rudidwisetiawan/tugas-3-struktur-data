#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main(){
struct pegawai{
char nama[50];
int waktukerja,lembur,gajipegawai,gaji;}x;


cout<<"Masukkan Nama : ";
gets(x.nama);
cout<<"Masukkan waktukerja Kerja : ";cin>>x.waktukerja;
cout<<endl;

cout<<"\nNama : "<<x.nama;
cout<<endl;
if(x.waktukerja>7)
                {
   x.gajipegawai=7*500;
   x.lembur=(x.waktukerja-7)*(15*500);
                x.gaji=x.gajipegawai+x.lembur;
   cout<<"Gaji pokok : "<<x.gajipegawai;
   }
else
                {
   x.lembur=0;
   x.gaji= x.waktukerja*500;
   }
cout<<"\nwaktukerja Kerja : "<<x.waktukerja;
cout<<"\nLembur : "<<x.lembur;
cout<<"\nGaji : "<<x.gaji;

getch();}

