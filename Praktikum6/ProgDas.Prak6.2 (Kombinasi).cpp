/*Buatlah program secara rekursif, masukkan jumlah N karakter dan cetak dalam semua kombinasi !
	Jumlah karakter = 3
	aaa aab aac aba abb abc aca acb acc baa bab bac bba bbb bbc bca bcb bcc caa cab cac cba cbb cbc cca ccb ccc
	BUILD SUCCESSFUL (total time: 1 second)*/
#include <iostream>
#include <conio.h>
using namespace std;

void printAllKLengthRec(char set[], string prefix, int n, int k){
    if (k == 0){
        cout<<(prefix)<<endl;
        return;
    }
    for (int i = 0; i < n; i++){
        string newPrefix;
        newPrefix = prefix + set[i];
        printAllKLengthRec(set, newPrefix, n, k - 1);
    }
}
void printAllKLength(char set[], int k,int n)
{
    printAllKLengthRec(set, "", n, k);
}

int main()
{
    char ch[] = {'a', 'b','c','d','e','f','g','h', 'i','j','k','l','m','n','o', 'p','q','r','s','t','u','v','w','x','y','z'};

    int N;
    cout<<"\njumlah karakter : "<<' ';
    while(cin >> N){
        if(N != -1){
        	printAllKLength(ch,N, N)    ;
        }
        else if(N>26){
            cout<<"karakter yang anda masukkan salah!";
			break;
        }
        else{
            break;
        }
    }
    
	return 0; 
}
