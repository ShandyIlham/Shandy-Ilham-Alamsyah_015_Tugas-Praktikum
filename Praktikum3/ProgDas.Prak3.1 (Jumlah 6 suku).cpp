// TUGAS : Buat progran menghitung jumlah 6 suku pertama dari barisan 1^3 , 2^3 , 3^3 , 4^3 ...
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	int i, b=3, n=6, j, pkt, jml;

	cout<<"================================================"<<endl;
	cout<<"    Program Menghitung Jumlah 6 Suku pertama    "<<endl;
	cout<<"================================================"<<endl<<endl;
	for(i=1; i<=n; i++){
		cout<<i<<"^3,\t";
	}
	cout<<endl;
	for (j=1; j<=n; j++){
		pkt = pow(j,b);		
		cout<<pkt<<",\t";		
		jml=jml+pkt;
	}
	cout<<"\n================================================"<<endl;
	cout<<" Jumlah deret ke-"<<n<<" = "<<jml;
	
	getch();
}
