#include<stdio.h>

int somarDigitos(int numero);
int soma = 0;

int main(){
int numero = 126;
printf("%d \n",somarDigitos(numero));


return 0;
}


int somarDigitos(int numero){
if(numero > 0){
    printf("numero %d \n",numero);
    soma = soma + numero%10;
    printf("soma %d \n",soma);
    somarDigitos(numero/10);
    }else return -1;
return soma;
}
