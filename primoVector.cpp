#include <stdio.h>
#include <iostream>
using namespace std;

bool esPrimo(int n){
	bool res;
	int divisor=1;
	int divisores= 0;

	while(divisor <= n){
		if(n%divisor==0){
			divisores++;
		}
		divisor++;
	}
	if(divisores== 2){
		res= true;
	}else{
		res= false;
	}
}

int primerPrimo(int *v, int n, int &elementos){

}

int main(){
	esPrimo(3);
}
