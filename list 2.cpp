#include <stdio.h>

main(){
	int lado, area, perimetro;
		
	printf("Informe o tamanho do lado do quadrado \n");
	scanf("%d", &lado);
	
	area = lado * lado;
	perimetro = lado * 4 ;
	
	printf("A area do retangulo eh %d \n", area);
	printf("O perimetro do retangulo eh %d \n", perimetro);
}