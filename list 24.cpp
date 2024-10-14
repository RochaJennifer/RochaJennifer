#include <stdio.h>

int main(){
	
	int x, y, z, m1, m2, m3, maior;
	
	printf("\nDigite 3 numeros para saber o maior entre eles: ");
	scanf("%d%d%d", &x, &y, &z);
	
	if (x >= y || x >= z){
		
		x = m1;
		
	if (y >= m1 || y >= z){
		
		y = m2;
	
	if (z >= m1 || z >= m2){
		
		z = m3;
			
	}
	}
	}
	
	printf("\nO numero maior eh: %d", m3);
	
	
	return(0);
}