#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main ()
{
    struct jumlah
    {
        char nama[20];
        int nim;
        int tugas;
        int kuis;
        int mid;
        int uas;
        float nilai_akhir;
    };
	struct jumlah mahasiswa[20];
	string nmwk;
	int nip;
	char kelas[50];
cout<<"-------------------------------------------------\n";
cout<<"Program Struktur Menghitung Nilai Akhir Mahasiswa\n";
cout<<"-------------------------------------------------\n";
cout<<"Masukkan Nama Wali kelas	: "; cin>> nmwk;
cout<<"Masukkan NIP Wali Kelas\t	: "; cin>> nip;
cout<<"Masukkan Kelas			: "; cin>> kelas;
int x,y;
cout<<"Masukan Jumlah Mahasiswa : ";
cin>>y;
for(x=0;x<y;x++)
{
    cout<<"Masukan Nama Mahasiswa : ";
    cin>>mahasiswa[x].nama;
    cout<<"Masukan NIM Mahasiswa  : ";
    cin>>mahasiswa[x].nim;
    cout<<"Masukan Nilai Tugas    : ";
    cin>>mahasiswa[x].tugas;
    cout<<"Masukan Nilai Kuis     : ";
    cin>>mahasiswa[x].kuis;
    cout<<"Masukan Nilai UTS      : ";
    cin>>mahasiswa[x].mid;
    cout<<"Masukan Nilai UAS      : ";
    cin>>mahasiswa[x].uas;
    cout<<endl;
}
cout<<endl;
cout<<"Wali Kelas	: "<<nmwk<<endl;
cout<<"NIP		: "<<nip<<endl;
cout<<"Kelas		: "<<kelas<<endl;
cout<<"\n----------------------------------------------------------------------\n";
cout<<"Nama"<<"\t"<<"NIM"<<"\t"<<"        Tugas"<<"\t"<<"Kuis"<<"\t"<<"UTS"<<"\t"<<"UAS"<<"\t"<<"Nilai Akhir"<<"\t"<<endl;
cout<<"----------------------------------------------------------------------\n";
for(x=0;x<y;x++)
{
    mahasiswa[x].nilai_akhir = (mahasiswa[x].tugas*20/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*40/100)+(mahasiswa[x].uas*40/100)-10;
cout<<mahasiswa[x].nama<<"\t"<<mahasiswa[x].nim<<"\t"<<mahasiswa[x].tugas<<"\t"<<mahasiswa[x].kuis<<"\t"<<mahasiswa[x].mid<<"\t"<<mahasiswa[x].uas<<"\t"<<mahasiswa[x].nilai_akhir;
 
 if (mahasiswa[x].nilai_akhir>=85)
    cout<<"\t (A)";
else if (mahasiswa[x].nilai_akhir>=70)
    cout<<"\t (B)";
else if (mahasiswa[x].nilai_akhir>=55)
    cout<<"\t (C)";
else if (mahasiswa[x].nilai_akhir>=40)
    cout<<"\t (D)";
else if (mahasiswa[x].nilai_akhir<=40)
    cout<<"\t (E)";
cout<<endl;
}
cout<<endl;
return 0;
}
