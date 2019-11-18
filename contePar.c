#include <stdio.h>

int numerosPares(int list[] , int n);


int main(){
int lista[] = {8,7,6,5,4,3,2,1};
int par = numerosPares(lista , 8);
printf("quantidades de pares %d \n", par);


return 0;
}





   int numerosPares(int list[] ,int n){
      int pares = 0;
      for (int k =0 ; k<n ; k++){
         if(list[k]%2 == 0) ++pares;
      }return pares;
   }
