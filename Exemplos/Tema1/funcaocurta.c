#include <stdio.h>

/* A fun��o abaixo recebe um inteiro x e retorna um valor real x/2 */
float f (int x){
	
	return x / 2.0;
}

int main (void){
	int x = 5;
	float y = f(x);
	printf("f(%d) = %g", x, y);
}
