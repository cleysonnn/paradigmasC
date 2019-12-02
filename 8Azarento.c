#include <stdio.h>

int Azarento(int list[] , int n);


int main(){
int lista[] = {1,2,3,4,9,1,8,10,20,30};
printf(" %d  \n", Azarento(lista,8));

return 0;
}


int Azarento (int list[] , int n){
int soma = 0;

for (int k =0 ; k < n; k++) {
	if(list[k] != 8) soma += list[k];
	if (list[k] == 8) return soma;

}
return soma;

}
