#include<stdio.h>
#include <string.h>
void trocarXY(char *palavra , int pos );



int main(){

int pos = 0;
char palavra[] = "yyyyxxxxxxxxjjbjbjbxxxxxkjbyyyy";
trocarXY(palavra,pos);
printf("%s" , palavra);
return 0;
}


void trocarXY(char *palavra , int pos){
if (palavra[pos] != '\0'){
	if (palavra[pos] == 'y'){
	 palavra[pos] = 'x';
	 trocarXY(palavra , pos+1);
	}
	else if (palavra[pos] == 'Y'){ 
         palavra[pos] = 'X';
         trocarXY(palavra , pos+1);
	}
	else{  trocarXY(palavra , pos+1);}
}
return ;
}
