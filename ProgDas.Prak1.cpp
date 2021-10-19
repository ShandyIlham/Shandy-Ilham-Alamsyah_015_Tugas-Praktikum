//Project by Shandy Ilham Alamsyah_21091397015
/*Seorang user di warnet mulai menggunakan internet pada pukul J1 dan selesai pada pukul J2. Bila tarip penggunaan di warnet tersebut 1 jam Rp. 5000,
- maka buat program billing warnet untuk menghitung lama pemakaian (dalam jam menit detik) dan biaya yang harus dibayar user.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void){
	char nama[40];
	int no;
	int jam; int menit;
	int jumlahdurasi; int jumlahjam; int jumlahmenit;
	 
	cout << "|=================================|"<<endl;
	cout << "              SiA.Net				"<<endl;
	cout << "|=================================|"<<endl;
	cout << "  tarif warnet Rp. 5000 per 1 jam  "<<endl;
	cout << "masukkan nama user : ";cin.getline(nama,30); 
	cout << "masukkan nomer PC : ";cin >> no;
	cout << "durasi main \n";
	cout << "masukkan jam : ";
	cin >> jam;
	cout << "masukkan menit : ";
	cin >> menit;
	jumlahjam=(jam*5000);
	jumlahmenit=(menit*2500)/30;
	jumlahdurasi=jumlahjam+jumlahmenit;
	cout << "Total pembayaran : Rp."<<jumlahdurasi<<",-"<<endl;
	
	cout <<endl;
	cout <<
	cout<<"|-------------------------------------------------|"<<endl;
	cout<<"|______________________SiA.NET____________________|\n";
	cout<<"|================< TERIMA KASIH >=================|"<<endl;
	cout<<"|=====< KAMI TUNGGU KEDATANGAN ANDA KEMBALI >=====|"<<endl;
	cout<<"|-------------------------------------------------|\n \n";
}
