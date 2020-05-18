#include <bits/stdc++.h>
using namespace std;

void imprimir(int *array,int n){
	for(int i=0;i<n;i++){
		cout<<*array++<<" ";
	}
	printf("\n");
}

void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}

int dividir(int *array,int a,int b){
	int pivot=*(array+a);
	int j=a;
	for(int i=a;i<b;i++){
		if(pivot>*(array+i)){
			j++;
			swap(*(array+j),*(array+i));
		}
	}
	swap(*(array+a),*(array+j));
	return j;
}


void algoritmo(int *array,int a,int b){
	if(a<b){
		int pi=dividir(array,a,b);
		algoritmo(array,a,pi);
		algoritmo(array,pi+1,b);
	}
}

int main(){
	int array[]={3,4,6,4,2,6,0,1};
	int n=sizeof(array)/sizeof(array[0]);
	imprimir(array,n);
	algoritmo(array,0,n);
	imprimir(array,n);
	
	return 0;
}
