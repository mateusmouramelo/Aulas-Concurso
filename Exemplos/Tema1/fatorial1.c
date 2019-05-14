#include <stdio.h>

/* Esta função recebe um parâmetro x e retorna o seu fatorial */
int fat (int x){
	int i, fatx = 1;
	for(i = 1; i <= x; i++)
		fatx *= i;
	return fatx;
}

int main(void){
	printf("%d\n", fat(0));
	printf("%d\n", fat(1));
	printf("%d\n", fat(2));
	printf("%d\n", fat(3));
	printf("%d\n", fat(4));
	printf("%d\n", fat(5));
	printf("%d\n", fat(6));
	printf("%d\n", fat(7));
	printf("%d\n", fat(8));
	printf("%d\n", fat(9));
	printf("%d\n", fat(10));
	printf("%d\n", fat(11));
	printf("%d\n", fat(12));
	return 0;
}
