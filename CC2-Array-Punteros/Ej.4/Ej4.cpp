#include <bits/stdc++.h>
using namespace std;

int iterativa(char *as){
	int i=0;
	while(*(as+i)!='\0')
		i++;
	return i;
}

int recursiva(char *as,int i=1){
	if (*as=='\0') return i;
	return i + recursiva(++as);
}

int main(){
	char as[]="Hola";
	//iterativa
	printf("%d ",iterativa(as));
	//recursiva
	printf("%d ",recursiva(as)-1);
	return 0;
}
