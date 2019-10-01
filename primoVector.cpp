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
	return res;
}

int primerPrimo(int *v, int n){
	bool prim= false;
	int i=0;

	while(i < n || prim== false){
		prim= esPrimo(v[i]);
		if(prim == true){
			return i;
		}
		i++;
		if(n == i){
			cout<<"Ningun primo en el array\n";
			break;
		}
	}
}

int main(){
	int array[4]= {12, 32, 4, 57};
	primerPrimo(array, 4);

}
