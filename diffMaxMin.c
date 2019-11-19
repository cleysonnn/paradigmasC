#include <stdio.h>

int diffMaxMin(int list[] , int n);

int main(){
int lista[] = {5,6,4,8,3,2,4,9};
printf("%d \n",diffMaxMin(lista,8));

return 0;
}



int diffMaxMin(int list[] , int n){
int max , min;

	max = list[0];
	min = list[0];

	for (int k = 0 ;k < n ; k++){
		if (list[k] < min )
			min = list[k];

		if (list[k] > max )
			max = list[k];
	}
return max - min;
}
