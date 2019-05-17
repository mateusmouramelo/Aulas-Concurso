/*pilha_new.c*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct lista {
	char portugues[30];
	char english[30];
	struct lista* prox;
};

typedef struct lista Lista;

/* função de criação: retorna uma lista vazia */
Lista* lst_cria(){
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* lst_insere(Lista* l, char *pt, char *en){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	strcpy(novo->portugues, pt);
	strcpy(novo->english, en);
	novo->prox = l;
	return novo;
}

/* imprime os valores dos elementos */
void lst_imprime(Lista* l){
	Lista* p;
	for(p = l; p != NULL; p = p->prox){
		printf("pt = %s\ten = %s\n", 
		p->portugues, 
		p->english);
	}
}

/* retorna 1 se a lista estivez vazia e 0 se não vazia */
int lst_vazia (Lista* l){
	if (l == NULL) return 1;
	else return 0;
}

/* busca um elemento na lista, procura pela palavra em portugues */
Lista* lst_busca (Lista* l, char *pt){
	Lista* p;
	for(p = l; p != NULL; p = p->prox){
		if(strcmp(p->portugues, pt) == 0){
			return p;
		}
	}
	return NULL;
}

/* busca um elemento na lista e retorna a celula anterior */
Lista* lst_busca_ant (Lista* l, char *pt){
	Lista* p; Lista* ant = NULL;
	for (p = l; p != NULL; p = p -> prox){
		if(strcmp(p->portugues, pt) == 0){
			return ant;
		}
		ant = p;
	} return NULL;
}

/* função que retira um elemento da lista */
Lista* lst_retira (Lista* l, char *pt){
	Lista* ant = lst_busca_ant(l, pt);
	Lista* p = lst_busca(l, pt);
	
	if (p == NULL) return l;
	else if (ant == NULL) l = p->prox;
	else ant->prox = p->prox;
	free(p);
	return l;
}

int main(void){
	int final = 1;
	char op = ' ', palavra [30], word[30];
	/*Lista* busca;*/
	
	Lista* l;
	l = lst_cria();
	l = lst_insere(l, "amor", "love");
	l = lst_insere(l, "palavra", "word");
	do{
		printf("Digite\tI para imprimir a lista\n\tA para adicionar um elemento\n\tP para procurar palavra\n\t");
		printf("R para remover uma palavra\n\tF para finalizar\n\t");
		scanf("%c", &op);
		switch(op){
			case 'I':
				lst_imprime(l);
				system("pause");
				break;
				
			case 'A':
				printf("Digite a palavra em portugues\n");
				scanf("%s", &palavra);
				fflush(stdin);
				printf("Digite a palavra em ingles\n");
				scanf("%s", &word);
				fflush(stdin);
				l = lst_insere(l, palavra, word);
				break;
				
			case 'P':
				printf("Digite a palavra em portugues\n");
				scanf("%s", &palavra);
				fflush(stdin);
				Lista* busca = lst_busca (l, palavra);
				if(busca == NULL)
					printf("Palavra não encontrada\n");
				else
					printf("busca: %s\n", busca->english);
				system("pause");
				break;
			
			case 'R':
				printf("Digite a palavra em portugues\n");
				scanf("%s", &palavra);
				fflush(stdin);
				l = lst_retira(l, palavra);
				break;
			
			default:
				break;
		}
		
		fflush(stdin);
	}while(op != 'F');
	
	return 0;
}
