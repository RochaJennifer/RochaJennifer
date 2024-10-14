#include <stdio.h>

main(){
	
	int raio;
	float perimetro, area;
	
	printf("Informe o valor do raio da circunferencia: \n");
	scanf("%d", &raio);
	
	perimetro = 2 * 3.14 * raio;
	
	area = 3.14 * (raio * raio);
	
	printf("A area da circunferencia eh de %.2f \n", area);
	printf("O perimetro da circunferencia eh de %.2f \n", perimetro);
}