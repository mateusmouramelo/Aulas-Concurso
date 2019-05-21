#include <stdio.h>

int main(void){
	int b = 17, *a = &b;
	printf("%d %d\n", b, &b);
	printf("%d %d %d", a, &a, *a);
}
