#include <stdio.h>

main(){
	int base, altura, area, perimetro;
		
	printf("Informe o tamanho da base do retangulo \n");
	scanf("%d", &base);
	
	printf("Informe a altura do retangulo \n");
	scanf("%d", &altura);
	
	area = base * altura;
	perimetro = (base * 2) + (altura * 2);
	
	printf("A area do retangulo eh %d \n", area);
	printf("O perimetro do retangulo eh %d \n", perimetro);
}