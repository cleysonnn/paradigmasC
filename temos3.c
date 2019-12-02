#include<stdio.h>


int contaElementos(int list[] , int n);


int main(){
int lista[] ={1,2,3};

if (contaElementos(lista , 3) == 0 ) printf("true \n");
else printf("false \n");

return 0;
}


int contaElementos(int list[] , int n){
int cont = 0;

	for (int k= 0 ; k < n ; k++){
	if( list[k] != '\0') cont++;
	}
if (cont == 3) return 0;
else return 1;

}

