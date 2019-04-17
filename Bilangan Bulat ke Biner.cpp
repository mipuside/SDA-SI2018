#include <iostream>
#include <stdio.h>
using namespace std;

void printBinary(int decNumber){
	
	if(decNumber == 0)
		return ;
	else
		printBinary(decNumber/2);
		
	printf("%d", decNumber%2);
	
	}
	
int main(){
	int decNumber;
	
	cout << "decNumber :" ; cin >> decNumber;
	printBinary(decNumber);
}

