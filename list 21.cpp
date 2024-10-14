#include <stdio.h>

int main(){
	
	int n;
	
	printf("\nInforme um numero: ");
	scanf("%d", &n);
	
	if( n > 0){
		printf("\nEste numero eh positivo");
	} else {
		printf("Este numero eh negativo"); 
	}
	return(0);
}