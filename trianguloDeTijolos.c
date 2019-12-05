#include<stdio.h>

int numeroDeTijolo(int n);
int tijolo = 0;
int main(){
printf("%d \n ",numeroDeTijolo(5));

}

int numeroDeTijolo(int n){
if (n==0) return 0;
if (n > 0){
    tijolo += n;
    numeroDeTijolo(n-1);
    }

return tijolo;
}
