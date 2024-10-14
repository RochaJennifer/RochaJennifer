#include <stdio.h>

main(){
	
	int x, y, resl, rest;
	
	printf("\nInforme dois numeros inteiros para ser o divisor e o quociente respectivamente: ");
	scanf("%d%d", &x, &y);
		
	resl = x / y;
	printf("\nO resultado da divisao eh: %d", resl);
	
	rest = x % y;
	printf("\nO resto da divisao eh: %d", rest);
	
}