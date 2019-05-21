#include <stdio.h>

/* O que este programa imprime? */
void troca(int *p1, int *p2){
	int n = *p1;
	*p1 = *p2;
	*p2 = n;
}

int main(void){
	int a = 0, b = 1;
	troca(&a, &b);
	printf("a = %d\nb = %d", a, b);
}
