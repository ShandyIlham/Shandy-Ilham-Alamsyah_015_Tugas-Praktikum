/* Buatlah program rekursif untuk menghitung segitiga Pascal !
F1          1
F2         1 1
F3        1 2 1
F4       1 3 3 1
F5      1 4 6 4 1
F6    1 5 10 10 5 1         */
#include <iostream>
#include <conio.h>
using namespace std;

long faktorial(int n) {
	long z = 1;
	int i = 1;
	
	while(i<=n) {
	z=z*i;
	i++;
  	}
	return z;
}

int main() {
	int i, j;
	
	cout<<" ========================= "<<endl;
	cout<<"|     SEGITIGA PASCAL     |"<<endl;
	cout<<" ========================= "<<endl<<endl;
	for (i=0; i<6; i++) {
		for (j=0; j<6-i-1; j++){
      		cout<<" ";
    	}
    	for (j=0; j<=i; j++){
      		cout << faktorial(i)/(faktorial(j)*faktorial(i-j))<<" ";
    	}
    cout << endl;
  	}
	
	getch();
}
