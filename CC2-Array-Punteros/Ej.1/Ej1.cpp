#include <bits/stdc++.h>
using namespace std;

int iterativa(int *ptr,int n){
	int s=0;
	for(int i=0;i<n;i++){
		s+=*ptr++;
	}
	return s;
}

int recursiva(int *ptr,int n){
	if(n==1) return *ptr;
	return *(ptr) + recursiva(++ptr,--n);
}

int main(){
	int array[]={1,2,3,4,5,6,7,8,9};
	int *ptr=array,n=sizeof(array)/sizeof(array[0]);
	//iterativa
	cout<<iterativa(ptr,n);
	cout<<'\n';
	//recursiva
	cout<<recursiva(ptr,n);
	return 0;
}
