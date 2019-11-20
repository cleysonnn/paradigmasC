#include<stdio.h>

double mediaCentrada(double list[] , int n);

int main(){
double lista[] = {10,2,5,5.5,9.1};
printf("%.2f \n", mediaCentrada(lista , 5));
return 0;
}


double mediaCentrada(double list[] , int n){

double max , min,soma;
max = list[0];
min = list[0];
soma = 0;


for (int i = 0 ; i < n; i++){
	soma = soma + list[i]; 
}

for (int k=0 ; k < n ; k++){
if (list[k] < min) min = list[k];
if (list[k] > max) max = list[k];

}
double diff = (max + min) ; // soma os minimo e maior para ser subtraido
double media = (soma - diff)/(n-2);
return media;


}
