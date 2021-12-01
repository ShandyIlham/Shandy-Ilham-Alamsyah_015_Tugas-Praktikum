/* Buat program BinarySearch dengan Rekursif ! (data tentukan sendiri)
	Data : 2,5,8,10,14,32, 35, 41, 67, 88, 90, 101, 109
	Data yang dicari : 10
	Data 10 berada pada indek ke – 3 */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define size 10
using namespace std;

int binsearch(int[], int, int, int);
int binsearch(int a[], int x, int low, int high) {
	int mid;
		if (low > high)
			return -1;
			mid = (low + high) / 2;
		if (x == a[mid]) {
			return (mid);
		} else if (x < a[mid]) {
			binsearch(a, x, low, mid - 1);
		} else {
			binsearch(a, x, mid + 1, high);
		}
}

int main() {
	int num, i, key, position;
	int low, high, list[size];

	cout<<"\nMasukan Jumlah Besar data:"; cin>>num;
	cout<<"\nMasukan Data:\n";
	for (i=0; i<num; i++) {
		cin>>list[i];
	}
	low = 0;
	high = num - 1;
	cout<<"\nMasukan data yang ingin di cari : "; cin>>key;
	position = binsearch(list, key, low, high);
	if (position != -1) {
		cout<<"\nData "<<key<<" berada pada Index ke - "<<position<<endl;
	} else
		cout<<"\nData tidak di temukan"<<endl;
	
	return (0);
}
