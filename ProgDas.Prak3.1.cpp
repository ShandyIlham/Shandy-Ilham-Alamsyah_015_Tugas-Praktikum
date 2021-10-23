#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a, b, c, jml, pkt, i, n, j;
	
	cout<<"================================================"<<endl;
	cout<<"    Program Menghitung Jumlah 6 Suku pertama    "<<endl;
	cout<<"================================================"<<endl<<endl;
	cout<<"Masukkan Nilai Suku Pertama\t: "; cin>>a;
	cout<<"Masukkan Nilai Beda Tiap Suku\t: "; cin>>b;
	cout<<"Masukkan Banyaknya Suku\t\t: ";  cin>>n;
	cout<<endl;
	
	for(i=1; i<=n; i++){
		cout<<i<<"^3\t";
	}
	cout<<endl;
	for (j=1; j<=n; j++){
		pkt = j*j*j;		
		cout<<pkt<<" \t";		
		jml=jml+pkt;
	}
	cout << endl;
	cout << "==============================================="<<endl;
	cout << "Jumlahnya adalah "<<jml<<endl;	
	cout << "==============================================="<<endl;
}
