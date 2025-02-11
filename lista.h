#ifndef LISTA_H
#define LISTA_H

#define MAX 100  

typedef struct {
    int elementos[MAX];
    int tamanho;  
} Lista;

void criarLista(Lista *l);
int listaVazia(Lista *l);
int listaCheia(Lista *l);
int obterTamanho(Lista *l);
int obterElemento(Lista *l, int posicao, int *elemento);
int modificarElemento(Lista *l, int posicao, int novoElemento);
int inserirElemento(Lista *l, int posicao, int elemento);
int retirarElemento(Lista *l, int posicao);

#endif