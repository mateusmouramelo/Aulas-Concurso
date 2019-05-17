#include <stdio.h>
#include <stdlib.h>

/* Programa baseado no livro de CELES, CERQUEIRA, RANGEL */
struct lista{
	int info;
	struct lista* prox;
};

typedef struct lista Lista;

/* função de criação: retorna uma lista vazia */
Lista* lst_cria (void){
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* lst_insere (Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

/* imprime os valores dos elementos */
void lst_imprime (Lista* l){
	Lista* p;
	for(p = l; p != NULL; p = p->prox)
		printf("info = %d\n", p->info);
}

/* retorna 1 se a lista estivez vazia e 0 se não vazia */
int lst_vazia (Lista* l){
	if (l == NULL) return 1;
	else return 0;
}

/* busca um elemento na lista e retorna a celula em que está presente */
Lista* lst_busca (Lista *l, int v){
	Lista* p;
	for (p = l; p != NULL; p = p -> prox){
		if (p->info == v)
			return p;
	}
	return NULL;
}

/* busca um elemento na lista e retorna a celula anterior */
Lista* lst_busca_ant (Lista *l, int v){
	Lista* p; Lista* ant = NULL;
	for (p = l; p != NULL; p = p -> prox){
		if (p->info == v)
			return ant;
		ant = p;
	} return NULL;
}

/* função que retira um elemento da lista */
Lista* lst_retira (Lista* l, int v){
	Lista* ant = lst_busca_ant(l, v);
	Lista* p = lst_busca(l, v);
	
	if (p == NULL) return l;
	else if (ant == NULL) l = p->prox;
	else ant->prox = p->prox;
	free(p);
	return l;
}

/* destroi a lista, retorna uma lista vazia */
Lista* lst_libera (Lista *l){
	Lista* p = l;
	while (p != NULL){
		Lista* t = p->prox;
		free(p);
		p = t;
	}
	return p;
}

int main(void){
	
	Lista* l = lst_cria();
	l = lst_insere(l, 3);
	l = lst_insere(l, 2);
	l = lst_insere(l, 1);
	printf("Lista\n");
	lst_imprime(l);
	l = lst_retira(l, 1);
	printf("Lista\n");
	lst_imprime(l);
	l = lst_libera(l);
	printf("Lista\n");
	lst_imprime(l);
	return 0;
}
