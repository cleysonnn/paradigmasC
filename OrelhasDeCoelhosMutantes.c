#include <stdio.h>

int contOrelhas(int n, int valores);

int main()
{
int valores = 0;
int orelha = contOrelhas( 5,valores);
printf("total %d \n ",orelha);
return 0;
}


int contOrelhas(int n, int valores){
if (n>0){
if (n%2 == 0) {
printf("%d \n",n);
valores = valores+3;
printf("%d \n",valores);
return contOrelhas(n-1,valores);
}
else if(n%2 != 0){
valores = valores +2;
return contOrelhas(n-1,valores);
}
}
return valores;
}
