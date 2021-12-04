// Buat program untuk mencetak nota kasir untuk pembelian lima buah buku pada sebuah file dengan nama file dinamis.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
	ofstream simpan;
	char nb[100], yn;
	int i, hs, jml, ttl, ta=0;
	
	simpan.open("nota.txt");
	simpan<<"                         NOTA BELANJA                         "<<endl;
	simpan<<"                       TOSERBA SIAMEDIA                       "<<endl;
	simpan<<"=============================================================="<<endl;
	simpan<<"| no |  nama barang  | harga satuan | jumlah |  total harga  |"<<endl;
	simpan<<"=============================================================="<<endl;
	for(i=0; i<=4; i++){
		input:
		cout<<"Pembelian Barang Ke-"<<i+1<<endl;
		cout<<"==========================="<<endl;
		cout<<" Nama Barang        = "; cin>>nb;
		cout<<" Harga Satuan       = "; cin>>hs;
		cout<<" Jumlah yang Dibeli = "; cin>>jml;
		ttl=hs*jml;
		ta=ta+ttl;
		cout<<endl;
		yn:
		cout<<" Ada barang lain lagi yang dibeli --maks 5-- (y/n)? "; cin>>yn;
		cout<<endl;
		if(yn=='Y' || yn=='y'){
			cout<<endl;
		}else if(yn=='N' || yn=='n'){
			goto nota;
		}else{
			cout<<"input anda salah!";
			goto yn;
		}
		if(i>=5){
			goto nota;
		}
		simpan<<"|"<<setiosflags(ios::right)<<setw(4)<<i+1;
		simpan<<"|"<<setiosflags(ios::right)<<setw(15)<<nb;
		simpan<<"|"<<setiosflags(ios::right)<<setw(14)<<hs;
		simpan<<"|"<<setiosflags(ios::right)<<setw(8)<<jml;
		simpan<<"|"<<setiosflags(ios::right)<<setw(15)<<ttl<<"|"<<endl;
	}
	nota:
	simpan<<"|"<<setiosflags(ios::right)<<setw(4)<<i+1;
	simpan<<"|"<<setiosflags(ios::right)<<setw(15)<<nb;
	simpan<<"|"<<setiosflags(ios::right)<<setw(14)<<hs;
	simpan<<"|"<<setiosflags(ios::right)<<setw(8)<<jml;
	simpan<<"|"<<setiosflags(ios::right)<<setw(15)<<ttl<<"|"<<endl;
	simpan<<"=============================================================="<<endl;
	simpan<<" total belanja (Rp)"<<setiosflags(ios::right)<<setw(27);
	simpan<<"|"<<setiosflags(ios::right)<<setw(15)<<ta<<"|"<<endl;
	simpan<<"=============================================================="<<endl;
	
	simpan.close();
	
	return 0;
}
