#include <stdio.h>

/* A função abaixo recebe um inteiro n >= 0 e retorna seu fatorial n! */
int fat (int x){
	
	if (x == 0) return 1;
	
	else return x * fat(x - 1);
}

void main (){
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
