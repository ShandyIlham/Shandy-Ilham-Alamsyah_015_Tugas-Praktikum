// Buatlah program rekursif untuk memecahkan permasalahan Menara Hanoi !
#include <stdio.h>
#include <iostream>
using namespace std;

void Hanoi(int n, char dari_pasak, char ke_pasak, char pasak_tmp){
	if (n == 1){
		cout<<"\nPindahkan disc 1 dari pasak "<<dari_pasak<<" ke pasak "<<ke_pasak;
	return;
	}
	Hanoi(n-1, dari_pasak, pasak_tmp, ke_pasak);
	cout<<"\nPindahkan disc "<<n<<" dari pasak "<<dari_pasak<<" ke pasak "<<ke_pasak;
	Hanoi(n-1, pasak_tmp, ke_pasak, dari_pasak);
}
int main(){
	int n;

	cout<<"Masukan Jumlah Disc : ";cin>>n;
	Hanoi(n, 'A', 'C', 'B');
	
	return 0;
}
