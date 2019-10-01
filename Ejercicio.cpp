#include<iostream>
using namespace std;

void readVector(int *v, int n){
	for(int i=0;i<=n;i++){
		cout<<"v["<<i<<"]= "<<endl;
		cin>>v[i];
	}
	
}


void showVectores(int *v,int n){
	for(int i=0;i<=n;i++){
		cout<<v[i];
	}


}
