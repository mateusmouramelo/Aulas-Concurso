#include <stdio.h>

/* O que esta fun��o retorna? */
int misterio (){
	int a = 0, *p;
	p = &a;
	*p = 6;
	return a;
}

int main (void){
	printf("%d", misterio());
}
