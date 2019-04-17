#include <iostream>
using namespace std;

void binary(int data[], int cari, int kiri, int kanan){ // data yang dibutuhkan untuk memecah dan mengecek angka yang dicari atau bukan
	int tengah = (kiri+kanan)/2;	
	if(data[tengah] == cari){
		cout << "Data ditemukan di array ke-" << tengah;
		
	}else if(data[tengah] < cari){
		//mencari elemen jika angka yang dicari lebih besar dari yang ditengah, maka dia ada di kelompok kanan
		binary(data, cari, tengah+1, kanan);
	}
	else{
		//mencari elemen jika angka yang dicari lebih kecil dari yang ditengah, maka dia ada di kelompok kiri
		binary(data, cari, kiri, tengah-1);
	}
}

int main(){
	int data[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int cari;
	
	cout << "Masukkan angka yang ingin dicari :"; cin >> cari;
	binary(data, cari, 0, 7);
	
}
