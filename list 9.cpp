#include <stdio.h>

int main(){
	
	float raio, altura, volume;
	
	printf("\nInforme o raio da lata de oleo: ");
	scanf("%f", &raio);
	
	printf("\nInforme a altura da lata de oleo: ");
	scanf("%f", &altura);
	
	volume = 3.14 * (raio * raio) * altura;
	
	printf("\nO volume da lata de oleo eh de: %.2f", volume);
	return(0);
}