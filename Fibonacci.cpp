#include <iostream>
using namespace std;

int fibo(int a)
{
	if(a==0){
		return 0;
	}else if(a==1){
		return 1;
	}else{
		return fibo(a-1)+fibo(a-2);
	}
	
	
}

int main(){
	int angka;
	
	cout << "Mencari Bilangan Fibonacci ke-n " << endl;
	cout << "Masukkan nilai suku ke-n :" ; cin >> angka;
	cout << "Fibonacci("<<angka<<") = " << fibo(angka);
	
	
}
