#include <stdio.h>

/* O que esta função retorna? */
int misterio (){
	int a = 0, *p;
	p = &a;
	*p = 6;
	return a;
}

int main (void){
	printf("%d", misterio());
}
