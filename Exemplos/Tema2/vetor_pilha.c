#include <stdio.h>

/* Vari�veis globais */
#define MAX 5
int pilha[MAX];
int tamanho = 0;

/* Esta fun��o recebe um inteiro e, caso n�o exceda o tamanho m�ximo,
 * o armazena na pr�xima posi��o da pilha, aumentando o seu tamanho */
void empilhar(int item){
	if(tamanho < MAX){
		pilha[tamanho] = item;
		tamanho ++;
	} else printf("Tamanho maximo estrapolado\n");
}

/* Esta fun��o remove um elemento da pilha e reduz seu tamanho */
void desempilhar(){
	if(tamanho > 0){
		pilha[tamanho] = 0;
		tamanho --;
	}else printf("Pilha vazia\n");
}

/* Esta fun��o imprime todos os elementos da pilha */
void imprimePilha(){
	int i;
	printf("Pilha: \n");
	for(i = tamanho - 1; i >= 0; i--)
		printf("%d\n", pilha[i]);
}

int main(void){
	int num = 0;
	char op = ' ';
	
	do{
		printf("Digite\tI para imprimir a pilha\n\tA para adicionar um elemento\n\tR para remover um elemento\n\tF para finalizar\n");
		
		scanf("%c", &op);
		switch(op){
			case 'I':
				imprimePilha();
				break;
				
			case 'A':
				printf("Digite um inteiro\n");
				while(scanf("%d", &num) == 0){
					printf("Invalido\n");
					fflush(stdin);
				}
				empilhar(num);
				break;
				
			case 'R':
				desempilhar();
				break;
				
			default:
				break;
		}
		
		fflush(stdin);
	}while(op != 'F');
	
	return 0;
}
