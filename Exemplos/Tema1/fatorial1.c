#include <stdio.h>

/* Esta fun��o recebe um par�metro x e retorna o seu fatorial */
int fat (int x){
	int i, fatx = 1;
	for(i = 1; i <= x; i++)
		fatx *= i;
	return fatx;
}

int main(void){
	printf("%d\n", fat(3));

	return 0;
}
