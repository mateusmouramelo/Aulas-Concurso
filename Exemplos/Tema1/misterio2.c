#include <stdio.h>

/* O que este programa imprime? */
int troca(int a, int b, int *pont){
	*pont = a;
	return b;
}

int main(void){
	int a = 0, b = 1, *p;
	p = &b;
	a = troca(a, b, p);
	printf("a = %d\nb = %d", a, b);
}
