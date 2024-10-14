#include <stdio.h>

int main(){
	
	int a, x, y, z;
	
	printf("\nInforme um numero com tres algarismos: ");
	scanf("%d", &a);
	
	if(a > 99 && a < 1000)
	{
	 	x = a / 100;
		y = (a % 100) / 10;
		z = (a % 100) % 10;	 
	}
	printf("%d%d%d", z, y, x);
	return(0);
}

