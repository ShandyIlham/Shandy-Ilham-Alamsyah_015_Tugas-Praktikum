/* TUGAS
	Misalkan karyawan PT. Makmur dikelompokkan berdasarkan golongannya. Upah per jam tiap karyawan bergantung pada golongannya, dengan ketentuan :
    Golongan Upah per jam
     A. Rp. 5000,-
     B. Rp. 7000,-
     C. Rp. 8000,-
     D. Rp. 10.000,-
    Jumlah jam kerja normal selama 1 minggu adalah 48 jam. Kelebihan jam kerja dianggap lembur dengan upah lembur adalah Rp.4000,- per jam untuk semua golongan
    karyawan. Buat program menghitung gaji karyawan mingguan. Data yang dimasukan dari keyboard adalah nama karyawan, golongan, jumlah jam kerja. Data yang dicetak
    adalah nama karyawan dan gajinya.
    Program dibuat dengan menggunakan struktur IF dan CASE.*/   
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	char nama[150], gol, yn;
	int jam, gatot, gpj;
	
	awal :
	//input
	cout<<"\t     Program Upah Mingguan Karyawan "<<endl;
	cout<<"======================================================"<<endl<<endl;
	cout<<" Nama\t\t       : "; gets(nama);
	cout<<" Golongan\t       : "; cin>>gol;
	cout<<" Jam kerja (perminggu) : "; cin>>jam;
	
	//perhitungan
	switch(gol)
	{
		case 'a': gpj=5000;
		break;
		case 'b': gpj=7000;
		break;
		case 'c': gpj=8000;
		break;
		case 'd': gpj=10000;
		break;
		
		default:
			cout<<"nilai yang anda masukkan salah"<<endl;
	}
	
	if (jam<=48){
		gatot=gpj*jam;
	}else {
		gatot=gpj*jam+4000;
	}
	
	cout<<"\n====================================================="<<endl<<endl;
	cout<<" Upah anda minggu ini\t   : "<<gatot;
	cout<<"\n";
	
	cout<<" apakah anda ingin menghitung upah lagi? [Y] atau [N] "; cin>>yn;
	if (yn=='Y' || yn=='y'){
		goto awal;
	} else {
		cout<<"\n Terima kasih, semoga membantu :) "<<endl<<endl;
	}
	
	getch();
}
