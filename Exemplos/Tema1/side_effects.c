#include <stdio.h>

int x = 10;
int cause = 0;	// side cause

/* A função abaixo imprime uma mensagem e altera a variavel global x */
void mudar_x (){
	int n;
	printf("Estou mudando x\n"); 	// side effect
	x = cause;	 // side effect
}

void main(){
	printf("x = %d\n", x);
	mudar_x();
	printf("x = %d", x);
}
