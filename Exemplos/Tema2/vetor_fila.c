#include <stdio.h>

#define MAX  5
int fila[MAX];
int tamanho = 0;

/* Esta função recebe um inteiro e, caso não exceda o tamanho máximo,
 * o armazena na próxima posição da fila, aumentando o seu tamanho */
void enfileirar(int item){	
	if(tamanho < MAX){	
		fila[tamanho] = item;
		tamanho++;
	} else printf("Tamanho maximo estrapolado !\n");
}

/* Esta função remove um elemento da fila e reduz seu tamanho */
void desenfileirar(){
	int i = 0;
	if(tamanho > 0){
		tamanho--;
		for(i = 0; i < tamanho; i++)
			fila[i] = fila[i + 1];
	}else printf("Pilha vazia\n");
}

/* Esta função imprime todos os elementos da fila */
void imprimeFila(){
	int i = 0;
	printf("Fila: \n");
	for(i = 0; i < tamanho; i++){
		printf("%d\n", fila[i]);
	}
}

int main(void){
	int num = 0;
	char op = ' ';
	
	do{
		printf("Digite\tI para imprimir a fila\n\tA para adicionar um elemento\n\tR para remover um elemento\n\tF para finalizar\n");
		
		scanf("%c", &op);
		switch(op){
			case 'I':
				imprimeFila();
				break;
				
			case 'A':
				printf("Digite um inteiro\n");
				while(scanf("%d", &num) == 0){
					printf("Invalido\n");
					fflush(stdin);
				}
				enfileirar(num);
				break;
				
			case 'R':
				desenfileirar();
				break;
				
			default:
				break;
		}
		
		fflush(stdin);
	}while(op != 'F');
	
	return 0;
}
