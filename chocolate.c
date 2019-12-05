#include <stdio.h>

int chocolate(int meta , int small , int big);


int main(){


printf("sao necessarias %d pequenas \n",chocolate(14,5,3));
return 0;
}




int chocolate(int meta , int small , int big){

int necessario;
necessario = meta %5;
if(necessario > small ) return -1;
return necessario;


}



