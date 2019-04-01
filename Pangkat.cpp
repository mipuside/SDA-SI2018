#include <iostream>
using namespace std;

int Pangkat(int x, int y){
	if(y==0){
		return 1;
	}
	else{
		return (x*Pangkat(x,y-1));
	}
}

int main(int argc, char**argv){
	
	int a, n;
	
	cout << "Masukkan angka : ";
	cin >> a;
	
	cout << "Masukkan nilai : ";
	cin >> n;
	
	cout << endl;
	
	cout << a << "^" << n << "=" << Pangkat(a,n);
	return 0;
		
	}
	

