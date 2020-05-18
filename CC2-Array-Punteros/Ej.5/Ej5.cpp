#include <bits/stdc++.h>
#define MAX 255
using namespace std;



void c(char *a,char *b){
	
	int i=0,j=0;
	while(*(a+i)!='\0' || *(b+j)!='\0'){
		if(*(a+i)!='\0') i++;
		if(*(b+j)!='\0') j++;
	}
	
	for(int v=0;v<i;v++){
		*(b+j)=*(a+v);
		j++;
	}
	
}

int main(){
	char a[]="primera cadena !!";
	char b[MAX]="segunda cadena !!";
	
	c(a,b);
	
	cout<<b<<'\n';
	
	return 0;
}
