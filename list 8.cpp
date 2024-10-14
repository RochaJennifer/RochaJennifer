#include <stdio.h>

int main(){
	
	float C, F;
	
	printf("\nInforme a temperatura em fahrenheit para ela ser transformada para celcius: ");
	scanf("%f", &F);
	
	C = (F - 32) / 1.8;
	
	printf("\nA temperatura em graus celsius eh de: %.2f", C);
	return(0);
}
