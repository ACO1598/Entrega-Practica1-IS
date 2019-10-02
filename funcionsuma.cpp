#include<iostream>
using namespace std;
int* sumarVectores(int *v1, int*v2, int n1, int n2);

int main(){
	//int v1[2]={1,2};
	//int v2[2]={1,2};
	//int v3[4]={1,2,3,4};
	//int *v4=sumarVectores(v1,v2,2,2);
	//for(int i=0;i<2;i++){
	//	cout << v4[i] << endl;
	//}
	return 0;
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
