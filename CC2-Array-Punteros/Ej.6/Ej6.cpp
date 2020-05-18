#include <iostream>
using namespace std;

char *c(char *a,char *b){
	char *t=a;
	a=b;
	b=t;
	return b;
}

int main(){
	char a[]="primera cadena";
	char b[]="segunda cadena";	
	int asd=sizeof(a)/sizeof(a[0]);
	char *as=c(a,b);
	for(int i=0;i<asd;i++){
		cout<<*as++;
	}
	return 0;
}
