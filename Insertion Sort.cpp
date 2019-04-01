#include <iostream>
using namespace std;

int main(){
	int p;
	int q;
	int angka[5] = {3,1,7,4,2};
	
	for(int i=0; i<4; i++){
		q = i + 1;
		
		while(q>0){
			if(angka[q] < angka[q-1]){
			p = angka[q];
			angka[q] = angka[q-1];
			angka[q-1] = p;
			
		}
		q --;
	}
		for(int i=0; i<5; i++){
			cout << angka[i] << endl;
		}
	}
	
}
