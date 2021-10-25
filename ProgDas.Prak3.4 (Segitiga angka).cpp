/* TUGAS
	Buat tampilan seperti berikut :
	Masukkan segitiga angka : 5
	1
	12
	123
	1234
	12345
	1234
	123
	12
	1								*/
	
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main(){
	int n,i,j;

	cout<<"|       Segitiga Angka       |"<<endl;
	cout<<" ============================ "<<endl<<endl;
	cout<<" Masukkan tinggi segitiga : ";
	cin>>n;
	cout<<"\n";
	for (i=1; i<=n; i++)
	{
	for (j=1; j<=i; j++)
	{
	cout<<""<<j;
	}
	cout<<" \n";
	}
	for (i=n-1; i>=1; i--)
	{
	for (j=1; j<=i; j++)
	{
	cout<<""<<j;
	}
	cout<<" \n";
	}
	
getch();
}
