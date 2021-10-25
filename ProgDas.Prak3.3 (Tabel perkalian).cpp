/* TUGAS
	Buat 1 2 3 4 5 6 7 8 9 10 program tabel perkalian : *
       1 . . . . . . . . . .
       2 . . . . . . . . . .
       3 . . . . . . . . . .
       4 . . . . . . . . . .
       5 . . . . . . . . . .
       6 . . . . . . . . . .
       7 . . . . . . . . . .
       8 . . . . . . . . . .
       9 . . . . . . . . . .
      10 . . . . . . . . . .  						*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){
	int i,j;
	
	cout<<"\t\t     Tabel Perkalian \n";
	cout<<"==========================================================="<<endl<<endl;

	for (i=1;i<=10;i++)
	{ cout<<setw(5)<<i;

	for (j=1;j<=10;j++)
	cout<<setw(5)<<i*j;
	cout<<endl;
	}
	
	getch();
}
