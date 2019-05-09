#include <stdio.h>

/* A função abaixo recebe um inteiro x e retorna um valor real x/2 */
float f(int x){
	
	float fx = x / 2.0;
	
	return fx;
}

void main(){
	float y = f(5);
	
	printf("%g", y);
}
