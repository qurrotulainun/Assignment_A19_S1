#include <iostream>
//TUGAS PRAKTIK ALGORITMA PEMROGAMAN HARI SENIN 
using namespace std;
int main ()
{
	cout<<"============================================================================ \n";
	cout<<"Nama		: QURROTUL AINUN NI'MATUS SHOLIHAH \n";
	cout<<"NIM		: 193100056 \n";
	cout<<"PRODI		: ILMU SISTEM INFORMASI \n";
	cout<<"FAKULTAS	: KOMPUTER \n";
	cout<<"====================================2019==================================== \n";
	cout<<"============================================================================ \n\n\n\n";
	int nomor,c,d;	
	float a,b;	
	char aritmatika;
	do 
	{
	cout<<"\n";
	cout<<"============================================================================ \n";
	cout<<" ARITMATIKA \n";
	cout<<" 1. PENJUMLAHAN \n";
	cout<<" 2. PENGURANGAN \n";
	cout<<" 3. PERKALIAN \n";
	cout<<" 4. PEMBAGIAN \n";
	cout<<" 5. MODULUS \n";
	cout<<" Masukkan Nomor Pada Daftar Aritmatika Yang Akan Diselesaikan [1/2/3/4] : ";cin>>nomor;
	cout<<"============================================================================";
	cout<<endl;
	switch (nomor)
		{
		case 1 :
			cout<<" \n 1. PENJUMLAHAN \n";
			cout<<" Masukkan Angka Ke - 1 : ";cin>>a;
			cout<<" Masukkan Angka Ke - 2 : ";cin>>b;
			cout<<" Hasil Penjumlahan "<<a<<" Dan "<<b<<" Adalah : "<<a+b<<" \n";
			cout<<"===========================================================================";
			cout<<"\n\n Kembali Ke daftar Aritmatika [Y/T] : ";cin>>aritmatika;
			break;
		case 2 :
			cout<<" \n 2. PENGURANGAN \n";
			cout<<" Masukkan Angka Ke - 1 : ";cin>>a;
			cout<<" Masukkan Angka Ke - 2 : ";cin>>b;
			cout<<" Hasil Pengurangan "<<a<<" Dan "<<b<<" Adalah : "<<a-b<<" \n";
			cout<<"============================================================================";
			cout<<"\n\n Kembali Ke daftar Aritmatika [Y/T] : ";cin>>aritmatika;
			break;
		case 3 :
			cout<<" \n 3. PERKALIAN \n";
			cout<<" Masukkan Angka Ke - 1 : ";cin>>a;
			cout<<" Masukkan Angka Ke - 2 : ";cin>>b;
			cout<<" Hasil Perkalian "<<a<<" Dan "<<b<<" Adalah : "<<a*b<<" \n";
			cout<<"============================================================================";
			cout<<"\n\n Kembali Ke daftar Aritmatika [Y/T] : ";cin>>aritmatika;
			break;
		case 4 :
			cout<<" \n 4. PEMBAGIAN \n";
			cout<<" Masukkan Angka Ke - 1 : ";cin>>a;
			cout<<" Masukkan Angka Ke - 2 : ";cin>>b;
			cout<<" Hasil Pembagian "<<a<<" Dan "<<b<<" Adalah : "<<a/b<<" \n";
			cout<<"============================================================================";
			cout<<"\n\n Kembali Ke daftar Aritmatika [Y/T] : ";cin>>aritmatika;		
			break;
		case 5 :
			cout<<" \n 5. MODULUS \n";
			cout<<" Masukkan Angka Ke - 1 : ";cin>>c;
			cout<<" Masukkan Angka Ke - 2 : ";cin>>d;
			cout<<" Hasil Modulus "<<c<<" Dan "<<d<<" Adalah : "<<c%d<<" \n";
			cout<<"============================================================================";
			cout<<"\n\n Kembali Ke daftar Aritmatika [Y/T] : ";cin>>aritmatika;		
			break;
		default :
			cout<<"Nomor Yang Anda Masukkan Salah."; //Otomatis kembali ke daftar Aritmatika
		}
	}
	while (aritmatika=='Y' || aritmatika=='y');
 	cout<<" Semoga Dapat Membantu Menyelesaikan Aritmatika."<<endl;
 	return 0;
 
}
