#include <stdio.h>

int x = 10;

/* A função abaixo imprime uma mensagem e altera a variavel global x */
void mudar_x (){
	int n;
	printf("Estou mudando x\n");
	scanf("%d", &n);
	x = n;
}

void main(){
	printf("x = %d\n", x);
	mudar_x();
	printf("x = %d", x);
}
