#include <stdio.h>

main(){
	
	int A, B, C, perimetro;
	
	printf("Informe o valor dos tres lados do triangulo: ");
	scanf("%d%d%d", &A, &B, &C );
	
	perimetro = A + B + C;
	
	printf("\n O perimetro do triangulo eh de:  %d", perimetro);
}