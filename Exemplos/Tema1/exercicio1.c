#include <stdio.h>

/* A função abaixo recebe 3 valores a, b, c e retorna a média (a+b+c)/3 */
float media(float v[], int tam){
	int i;
	float soma = 0;
	for(i = 0; i < tam; i++)
		soma = soma + v[i];
	return soma/tam;
}

void main(){
	float v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%g", media(v, 10));
}
