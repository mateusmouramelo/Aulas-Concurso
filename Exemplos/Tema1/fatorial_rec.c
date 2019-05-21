#include <stdio.h>

/* A função abaixo recebe um inteiro n >= 0 e retorna seu fatorial n! */
int fat (int x){
	
	if (x == 0) return 1;
	
	else return x * fat(x - 1);
}

void main (){
	printf("%d\n", fat(3));
	return 0;
}
