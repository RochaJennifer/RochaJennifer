#include <stdio.h>

int main(){
	
	int valor, a, b, c, d, e, f, g;
	
	printf("infome o valor a ser sacado: ");
	scanf("%d", &valor);
	
	if( valor >= 1){
		a = valor / 100;
		b = (valor % 100) / 50;
		c = ((valor % 100) % 50) / 20;
		d = (((valor %100) % 50) % 20) / 10;
		e = ((((valor %100) % 50) % 20) % 10) / 5;
		f = (((((valor %100) % 50) % 20) % 10) % 5) / 2;
		g = (((((valor %100) % 50) % 20) % 10) % 5) % 2;
	}
	
	printf("\nNotas de 100: %d", a);
	printf("\nNotas de 50: %d", b);
	printf("\nNotas de 20: %d", c);
	printf("\nNotas de 10: %d", d);
	printf("\nNotas de 5: %d", e);
	printf("\nNotas de 2: %d", f);
	printf("\nNotas de 1: %d", g);
	
	return(0);
}