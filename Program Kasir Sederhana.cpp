#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int barang()
{
	string barang[]={"EXPRESSO","CAFFE AMERICANO","CAPPUCCINO","CAFFE LATTE","BLACK EYE COFFE","SPRIT JAWA","ROTI BAKAR","PISANG CRISPY","KENTANG GORENG","SOSIS BAKAR","CRISPY RICE", "SOSTEL MARTABAK"};
  	int kode [] ={0,1,2,3,4,5,6,7,8,9,10,11};
	int harga[]={15000,25000,15000,20000,25000,10000,10000,15000,15000,20000,10000,10000};
	int jumlah,total[1000],a[10000],x,i,kembali,bayar,b;
	string pemesan;
	char yuk;
	jumlah = 0;
	do
 	{		
	system ("CLS");
 		cout<<"\t=======================================================================================";
 		cout<<"\n\t\t\t      FINAL PROJECT ALGORITMA DAN PEMROGAMAN";
 		cout<<"\n\t\t\t\t   PROGRAM KASIR CODING'S CAFE";
 		cout<<"\n\t\t\t\t\t   KELOMPOK 1 ";
 		cout<<"\n\t\t\t      DOSEN : MUSTHOFA GALIH PRADANA, M.Kom.";
 		cout<<"\n\t=====================================================================================";
	cout<<"\n\tMasukkan Nama Pemesan : ";cin>>pemesan;
	cout<<"\tMasukkan No. Meja : ";cin>>b;
	cout<<"\t=================================================================\n";
    cout << "\t  Kode\t|\t  Menu\t\t\t|\tHarga\t\t|\n";
	cout<<"\t=================================================================\n";
	for(i=0;i<12;i++)
	{cout << "\t " << kode [i]  << "\t|\t" << barang[i] << "\t\t|\tRp. " << harga[i] << "\t|" << endl;}
    cout<<"\t=================================================================\n";
	cout<<"\tMasukkan banyak menu yang akan dipesan : "; cin>>x;
	for (i=1;i<=x;i++)
		{
			cout<<"\tMasukkan kode :";cin>>kode[i];
			cout<<"\tNama menu : "<< barang[kode[i]] << endl;
	   		cout<<"\tHarga : Rp. "<< harga[kode[i]] << endl;
	   		cout<<"\tMasukkan jumlah yang akan dipesan : ";cin>>a[i];
	   		total[i] = harga[kode[i]]*a[i];
	   		jumlah = jumlah + total[i];
	   		cout<<"\tTotal : Rp. "<<total[i]<<endl;
	   	}
	system ("CLS");
 		cout<<"\t=======================================================================================";
 		cout<<"\n\t\t\t      FINAL PROJECT ALGORITMA DAN PEMROGAMAN";
 		cout<<"\n\t\t\t\t   PROGRAM KASIR CODING'S CAFE";
 		cout<<"\n\t\t\t\t\t   KELOMPOK 1 ";
 		cout<<"\n\t\t\t      DOSEN : MUSTHOFA GALIH PRADANA, M.Kom.";
 		cout<<"\n\t=======================================================================================\n";
	cout<<"\tNama Pemesan : "<<pemesan<<endl;
	cout<<"\tNo. Meja : "<<b<<endl;
	cout<<"\t=======================================================================================\n";
	cout << "\tNo |   Kode  |  Menu\t\t\t|  Harga Satuan  |  Porsi  |  Total Semuanya  | \n";
	cout<<"\t=======================================================================================\n";
	for(int i=1;i<=x;i++)
		{
			cout<<"\t";
			cout<<setiosflags(ios::left)<<setw(3)<<i;cout<<"|\t";
			cout<<setiosflags(ios::left)<<setw(5)<<kode[i];cout<<"|\t";
			cout<<setiosflags(ios::left)<<setw(16)<<barang[kode[i]];cout<<"\t|     Rp.";
			cout<<setiosflags(ios::left)<<setw(8)<<harga[kode[i]];cout<<"|    ";
			cout<<setiosflags(ios::left)<<setw(5)<<a[i];cout<<"|      ";
			cout<<setiosflags(ios::left)<<setw(12)<<total[i];cout<<"|\n";
		}	
	cout<<"\t=======================================================================================\n"<<endl;
	cout<<"\t\t\t\t\t\t\t\tTotal Bayar\t: Rp. "<<jumlah<<endl;
	cout<<"\t\t\t\t\t\t\t\tUang Bayar\t: Rp. ";cin>>bayar;
	kembali=bayar-jumlah;
	cout<<"\t\t\t\t\t\t\t\tUang Kembali\t: Rp. "<<kembali<<endl;
	cout<<"\n\tPesanan Sudah Benar [Y/T] : ";cin>>yuk;
	}while (yuk =='t' || yuk =='T');
 	cout<<"\tSelamat Menikmati. Silahkan datang kembali."<<endl;
}
int main(int argc, char** argv)
{
	barang ();	
	return 0;
}  
