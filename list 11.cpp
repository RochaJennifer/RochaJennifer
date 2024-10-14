#include <stdio.h>

int main(){
	
	float B1,B2, p1, p2, p3, p4, media;
	
	printf("\nInforme as notas das provas do primeiro bimestre respectivamente:");
	scanf("%f%f", &p1, &p2);
	
	printf("\nInforme as notas das provas do segundo bimestre rspectivamente:");
	scanf("%f%f", &p3, &p4);
	
	B1 = p1 + p2;
	B2 = p3 + p4;
	
	media = (B1 + B2) / 2.0;
	
	printf("\nA media aritmetica eh de: %.2f", media);
	
	return(0);
}