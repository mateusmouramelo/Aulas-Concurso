#include <stdio.h>

/* Esta função recebe um parâmetro x >= 0 e retorna o seu fatorial */
int fat (int x){
	int i, fatx = 1;
	for(i = x; i > 0; i--)
		fatx *= i;
	return fatx;
}

int main(void){
	printf("%d\n", fat(3));

	return 0;
}
