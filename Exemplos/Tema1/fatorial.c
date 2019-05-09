#include <stdio.h>

/* A função abaixo recebe um inteiro n >= 0 e retorna seu fatorial n! */
int fatorial (int n){
	
	if (n == 0) return 1;
	
	else return n * fatorial(n - 1);
}

void main (){
	
	int num = 10;

	printf("%d", fatorial(num));
}
