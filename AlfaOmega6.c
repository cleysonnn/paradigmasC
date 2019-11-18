# include <stdio.h>

int alfaOmega(int list[] , int n);

int main(){

int lista[] = {7,2,3,4,5,8,9,6};
if (alfaOmega(lista , 8) == 0) printf("alfaOmega \n");
else printf("o numero 6 nao esta nem no inicio nem no fim \n");
return 0;
}

int alfaOmega(int list[] , int n){
if (list[0] == 6 || list[n-1] == 6) return 0;
}
