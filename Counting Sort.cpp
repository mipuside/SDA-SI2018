#include <iostream>
using namespace std;

int main(){
	int acak[6] = {3,1,7,4,3,5};
	// indeks      0,1,2,3,4,5
	int kumulatif[8] = {0,0,0,0,0,0,0,0};
	// indeks           0,1,2,3,4,5,6,7
	int hasil[6];
	int temp; //variabel tambahan
	int jumlah; //variabel tambahan
	int a;
	
	//langkah pertama
	for(int i=0; i<=5; i++){
		temp = acak[i]; //langkah satu
		jumlah = kumulatif[temp]; //langkah kedua
		jumlah = jumlah + 1; //langkah ketiga
		kumulatif[temp];
	}
	//cek
	for(int j = 0; j<=7; j++){
		cout << kumulatif[j];
	}
	cout << endl;
	
	//langkah kedua
	for(int i=0; i<7; i++){
		a = kumulatif[i] + kumulatif[i+1];
		kumulatif[i+1] = a;
		
	}
	//cek
	for(int j = 0; j<=7; j++){
		cout << kumulatif[j];
}
}
