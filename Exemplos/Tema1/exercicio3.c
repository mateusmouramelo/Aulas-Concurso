#include <stdio.h>
#include <math.h>

/* A função abaixo recebe 3 inteiros a, b, c e dois ponteiros reais x_1 e x_2.
 * Resolve a equação ax^2+bx+c=0 e armazena os resultados em x_1 e x_2 */
void bhaskara(int a, int b, int c, float *x_1, float *x_2){
	
	float delta = pow(b, 2) - 4 * a * c;
	
	*x_1 = (- b + sqrt(delta)) / (2 * a);
	
	*x_2 = (- b - sqrt(delta)) / (2 * a);
}

void main(){
	float x_1, x_2;
	
	bhaskara(1, 2, -10, &x_1, &x_2);
	
	printf("x1 = %g\nx2 = %g", x_1, x_2);
}
