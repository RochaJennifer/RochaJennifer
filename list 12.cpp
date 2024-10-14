#include <stdio.h>

int main(){
	
	float x, y;
	
	printf("\nInforme a velociade e m/s pra ser transformada em k/h: ");
	scanf("%f", &x);
	
	y = x * 3.6;
	
	printf(" A velocidade em k/h eh %.2f", y);
	return(0);
}