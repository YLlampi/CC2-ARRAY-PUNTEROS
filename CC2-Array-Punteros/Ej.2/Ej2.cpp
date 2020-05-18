#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
	int t = a;
	a=b;
	b=t;
}

void iterativa(int *array,int n){    
	for(int i=0;i<n/2;i++){
		swap(*(array+i),*(array+n-i-1));
	}
}

void recursiva(int *array,int n){
		if(--n/2>=0){
			swap(*array,*(array+n));
			recursiva(++array,--n);
		}  
}

void imprimir(int *array,int n){
	for(int i=0;i<n;i++){
		printf("%d ",*(array+i));
	}
	cout<<'\n';
}

int main(){
	int array[]={0,1,2,3,4,5,6,7,8};
	int n=sizeof(array)/sizeof(array[0]);
	imprimir(array,n);
	//iterativa
	n%2==0 ? n--:n;
	iterativa(array,n);
	imprimir(array,n);
	//recursiva
	recursiva(array,n);
	imprimir(array,n);
	return 0;
}
