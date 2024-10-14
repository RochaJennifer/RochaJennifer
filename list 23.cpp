#include <stdio.h>

int main(){
	
	int n, i;
	
	printf("\nInforme um numero: ");
	scanf("%d", &n);
	
	i = n % 2;  
	
	if( i = 0){
		printf("\nEste numero eh par");
	} else {
		printf("\nEste numero eh impar");
	}
	return(0);
}