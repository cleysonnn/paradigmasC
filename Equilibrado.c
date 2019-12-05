#include<stdio.h>

int equilibrado(int list[] ,int b, int tamanho); 

int main (){

int b = 1;
int lista[] ={2,2,2,2,2,2,4};
equilibrado(lista , b , 7);
return 0;
}


int equilibrado (int list[] , int b , int tamanho){
int var1 , var2;
var1 = 0;
var2 = 0;
if(b<tamanho){
	for (int k = 0 ;k < b ; k++){
	printf("esqueda %d \n ",list[k]);
		var1 += list[k];
	}
	for (int i = b; i < tamanho ; i++){
	printf("direita %d \n ",list[i]);
		var2 += list[i];
	}
    if(var1 == var2) printf("equilibrado \n");
    else equilibrado(list , b+1 , tamanho);
}
else printf(" nao equilibrado \n");

printf(" E  %d  D %d \n", var1 , var2);
return 0;
}
