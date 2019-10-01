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
			return 0;
		}
	}
}

int main(){
	int array[4]= {12, 32, 3, 57};
	res= primerPrimo(array, 4);
	
	if(res = 0){
		cout<<"No se ha encontrado ningun primo";
	}else{
		cout<<"Primo en contrado en la posicion: "<<res;
	}
}
