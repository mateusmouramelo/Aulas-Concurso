#include <stdio.h>

/* A função abaixo recebe um inteiro x > 0 e imprime o seu valor em binário */
void print_binario(int x){
	
	if (x <= 0) return;
	
	print_binario(x / 2);
	
	printf("%d", x % 2);
}

void main(){
	print_binario(0);
	printf("\n");
	print_binario(1);
	printf("\n");
	print_binario(3);
	printf("\n");
	print_binario(10);
	printf("\n");
	print_binario(1000);
	printf("\n");
	print_binario(INT_MAX);
}
