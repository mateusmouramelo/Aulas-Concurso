#include <stdio.h>

int x = 10;

/* A função abaixo imprime uma mensagem e altera a variavel global x */
void mudar_x(){
	
	printf("Estou mudando x\n");
	
	x = 20;
}

void main(){
	printf("x = %d\n", x);
	mudar_x();
	printf("x = %d", x);
}
