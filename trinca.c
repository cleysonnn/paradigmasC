#include <stdio.h>

int Trinca(int list[] , int n);

int main(){

int lista[] = {1,4,7,8,5,2,3,6,9,10,11};
if (Trinca(lista , 11) == 0 ) printf("True \n");
else printf("false \n");
return 0;
}


int Trinca(int list[] , int n){
int trincas = 0;
for (int k = 0 ; k < n-2 ;k++){
printf("%d %d %d \n ",list[k],list[k]+1,list[k]+2);
	if((list[k+1] == list[k]+1) && (list[k+2] == list[k]+2)) ++trincas;
	}
printf("numeros de trincas : %d \n",trincas);
if (trincas != 0) return 0;
else return 1;
}
