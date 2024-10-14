#include <stdio.h>

main(){
	
	int number, sucessor;
	
	printf("\n------------------ NUMERO SUCESSOR ------------------\n");
	
	printf("\ninforme um numero para descobrir seu sucessor");
	scanf("%d", &number);
	
	sucessor = number + 1;
	
	printf("\n O numero sucessor do numero informad eh: %d", sucessor);
}