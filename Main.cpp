#include <iostream>
#include <stdio.h>
using namespace std;

void readVector(int *v, int n){
	for(int i=0;i<n;i++){
		cout<<"v["<<i<<"]= ";
		cin>>v[i];
		cout<<endl;
	}
}


void showVectores(int *v, int n){
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int* sumarVectores(int *v1, int *v2, int n1, int n2){
	if(n1==n2){
	int *suma=new int[n1];
	for(int i=0;i<n1;i++){
		suma[i]=v1[i]+v2[i];	
	}
	cout << "El vector ha sido sumado correctamente" << endl;
	return suma;
	}else{
	cout << "Error: El tamaño de los vectores no coincide" << endl;
	}	
}

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

int primerPrimo(int *v, int n, int &elementos){
	bool prim= false;
	int i=0;

	while(i < n || prim== false){
		prim= esPrimo(v[i]);
		if(prim == true){
			elementos= v[i];
			return i;
		}
		i++;
		if(n == i){
			return -1;
		}
	}
}

int main(){
	int n1, n2;

	cout<<"De que tamaño es el vector 1?\n";
	cin>>n1;
	int *v1[n1];
	readVector(*v1, n1);

	cout<<"De que tamaño es el vector 2?\n";
	cin>>n2;
	int *v2[n2];
	readVector(*v2, n2);

	int *suma= sumarVectores(*v1, *v2, n1, n2);

	cout<<"La suma resultante es: ";
	showVectores(suma, n1);

	int elemento;
	int pos= primerPrimo(suma, n1, elemento);


	if(pos!= -1){
		cout<<"La posicion del primer primo es "<<pos<<" con valor: "<<elemento<<endl;
	}else{
		cout<<"No se ha encontrado ningun primo"<<endl;
	}
	
}
