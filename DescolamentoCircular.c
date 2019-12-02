#include <stdio.h>

int descolamento(int list[] , int n);

int main()
{

int lista [] = {1,2,3,4,5};

for (int i=0 ; i <5 ; i++)
{
printf("%d ", lista[i]);
}
printf("\n");
descolamento(lista , 5);
for (int j=0 ; j <5 ; j++)
{
printf("%d ", lista[j]);
}
printf("\n");

return 0;
}


int descolamento(int list[] , int n)
{
int temp ;
for (int k =0 ; k<n ; k++)
{
temp = list[0];
list[0] = list[n-1];
list[n-1] = temp;

}
return 0;


}
