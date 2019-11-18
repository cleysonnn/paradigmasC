#include <stdio.h>

int alfaOmega(int list[] ,int n);


int main(){
int lista[] = {1,2,3,4,5,6,1};
if (alfaOmega(lista,7) == 0) printf("iguadade alfaOmega \n");
else printf("nao ha iguadade \n");
return 0;
}


int alfaOmega(int list[] ,int n){
if (list[0] == list[n-1]) return 0;

}
