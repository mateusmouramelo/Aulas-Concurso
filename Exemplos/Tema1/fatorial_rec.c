#include <stdio.h>

/* A função abaixo recebe um inteiro x >= 0 e retorna seu fatorial x! */
int fat (int x){
	if (x == 0)
		 return 1;
	else if (x > 0)
		return x * fat(x - 1);
}

int main (void){
	printf("%d\n", fat(10));
	return 0;
}
