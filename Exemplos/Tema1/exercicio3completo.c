#include <stdio.h>
#include <math.h>

/* A fun��o abaixo recebe 3 inteiros a, b, c e dois ponteiros reais x_1 e x_2
 * Resolve a equa��o ax^2+bx+c=0.
 * Se imposs�vel retorna 0, e se poss�vel armazena os valores de x_1 e x_2 e retorna 1*/
int bhaskara(int a, int b, int c, float *x_1, float *x_2){
	
	float delta = pow(b, 2) - 4 * a * c;
	
	if (delta < 0)
	
		return 0;
		
	else{
		
		*x_1 = (- b + sqrt(delta)) / (2 * a);
	
		*x_2 = (- b - sqrt(delta)) / (2 * a);
	
		return 1;
	}
}

void main(){
	float x_1, x_2;
	
	if (bhaskara(1, 2, 50, &x_1, &x_2))
	
		printf("x1 = %g\nx2 = %g", x_1, x_2);
		
	else
	
		printf("Delta negativo");
}
