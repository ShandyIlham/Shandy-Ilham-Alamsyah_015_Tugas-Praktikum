/* TUGAS
	Diinginkan sebuah program menghitung segitiga siku-siku yang mempunyai tampilan menu dan fasilitas sebagai berikut dan pada setiap pilihan menu, dimasukkan
	data alas (sisi sikusiku pertama) dan tinggi (sisi siku-siku kedua). Program dibuat dengan menggunakan struktur CASE.
	MENU SEGITIGA SIKU-SIKU
    1. Hitung panjang sisi miring
    2. Hitung luas
    3. Hitung keliling
    4. Keluar program*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char yn;
	int pil;
	float a, t, smiring, luas, keliling, hasil;
	
	menu :
	//main menu
	cout<<" =============================== "<<endl;
	cout<<"|    MENU SEGITIGA SIKU-SIKU    |"<<endl;
	cout<<" =============================== "<<endl;
	cout<<"| 1. Hitung Panjang sisi miring |"<<endl;
	cout<<"| 2. Hitung Luas                |"<<endl;
	cout<<"| 3. Hitung Keliling            |"<<endl;
	cout<<"| 4. Keluar program             |"<<endl;
	cout<<" =============================== "<<endl;
	cout<<" Pilihan : "; cin>>pil;
	cout<<"================================="<<endl<<endl;
	
	switch (pil){
		case 1:
			cout<<"| Menghitung Sisi Miring Segitiga |"<<endl;
			cout<<" ================================= "<<endl;
			cout<<" Masukkan alas segitiga       = "; cin>>a;
			cout<<" Masukkan tinggi segitiga     = "; cin>>t;
			smiring=sqrt((a*a)+(t*t));
			cout<<"==================================="<<endl;
			cout<<" Panjang Sisi Miring segitiga = "<<smiring<<endl;
		break;
		
		case 2:
			cout<<"|     Menghitung Luas Segitiga    |"<<endl;
			cout<<" ================================= "<<endl;
			cout<<" Masukkan alas segitiga       = "; cin>>a;
			cout<<" Masukkan tinggi segitiga     = "; cin>>t;
			luas=0.5*a*t;
			cout<<"==================================="<<endl;
			cout<<" Luas segitiga\t\t      = "<<luas<<endl;
		break;
		
		case 3:
			cout<<"|   Menghitung Keliling Segitiga  |"<<endl;
			cout<<" ================================= "<<endl;
			cout<<" Masukkan alas segitiga       = "; cin>>a;
			cout<<" Masukkan tinggi segitiga     = "; cin>>t;
			keliling=a+t+smiring;
			cout<<"==================================="<<endl;
			cout<<" Keliling segitiga\t      = "<<keliling<<endl;
		break;
		
		case 4:
			goto akhir;
		break;
		
		default:
			cout<<" maaf pilihan yang anda masukkan salah ";
	}
	
	akhir:
		cout<<"\n terima kasih sudah menggunakan kalkulator ini "<<endl;
		cout<<" apakah anda ingin menghitung lagi? [Y] atau [N] "; cin>>yn;
		if (yn=='Y' || yn=='y'){
		goto menu;
		}
		
	return 0;
}
