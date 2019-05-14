#include <stdio.h>

/* A função abaixo recebe um inteiro x e retorna um valor real x/2 */
float f (int x){
	
	return x / 2.0;
}

int main (void){
	int x = 5;
	float y = f(x);
	printf("f(%d) = ", x);
	printf("%g", y);
}
