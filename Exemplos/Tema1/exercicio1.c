#include <stdio.h>

/* A fun��o abaixo recebe 3 valores a, b, c e retorna a m�dia (a+b+c)/3 */
float media(float a, float b, float c){
	
	float media = (a + b + c) / 3;
	
	return media;
}

void main(){
	printf("%g", media(0, 10, -5));
}
