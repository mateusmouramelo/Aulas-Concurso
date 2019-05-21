#include <stdio.h>

/* A função abaixo recebe um inteiro x > 0 e imprime o seu valor em binário */
void print_binario(int x){
	
	if (x <= 0) return;
	
	print_binario(x / 2);
	
	printf("%d", x % 2);
}

void main(){
	print_binario(13);
	printf("\n");
}
