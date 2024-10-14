#include <stdio.h>

int main(){
	
	int n, dec, binario;
	
	printf("\nInforme um numero menor que 32: ");
	scanf("%d", &dec);
	
	if(dec > 0 && dec < 32){
		n = dec / 2;
		n = (dec % 2) / 2;
		n = ((dec % 2) / 2) / 2;
		n = (((dec % 2) / 2) / 2) / 2;
		n = ((((dec % 2) / 2) / 2) / 2) % 2;
		
			printf("O numero binario eh: %d", n);
	}
	
}