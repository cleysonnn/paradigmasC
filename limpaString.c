#include<stdio.h>


void limpaString(char *palavra, int pos);

int main(){
int pos = 0;
char palavra[] = "ccllleeeeeyyyyyysssssooooonnnnnn";
limpaString(palavra,pos);
printf("%s \n",palavra);
return 0 ;
}


void limpaString(char *palavra , int pos){
//printf("%s \n",palavra);
if(palavra[pos] == '\0') return;
if (palavra[pos] == palavra[pos+1]){
    palavra[pos+1] = palavra[pos+2];
    limpaString(palavra,pos+1);
    }
if (palavra[pos] == palavra[pos-1]){
    palavra[pos] = palavra[pos+1];
    limpaString(palavra,pos+1);
    }
limpaString(palavra,pos+1);

}
