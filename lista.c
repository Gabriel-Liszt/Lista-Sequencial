#include <stdio.h>
#include "lista.h"

// Criação da lista vaczia 
void CriarLista(Lista *l){
    l->tamanho = 0;
}

// Verificar se a lista está vazia
int ListaVazia(Lista *l){
    return l->tamanho == 0;
}

// Verificar se a lista está cheia
int ListaCheia(Lista *l){
    return l->tamanho == MAX;
}

// Retornar o tamanho da lista
int ObterTamanho(Lista *l){
    return l->tamanho;
}

// Obter um elemento da lista
int ObterElemento(Lista *l, int posicao, int *elemento){
    if(posicao < 0 || posicao > l->tamanho){
        return 0;// invalido
    }

    *elemento = l->elementos[posicao - 1];
    return 1;// sucesso
}

// Modificar um elemento da lista
int ModificarElemento(Lista *l, int posicao, int novoElemento){
    if(posicao < 0 || posicao > l->tamanho){
        return 0;// invalido
    }
    l->elementos[posicao - 1] = novoElemento;
}

// Inserir um elemento na lista
int InserirElemento(Lista *l, int posicao, int elemento){
    if(listaCheia(l) || posicao < 1 || posicao > l->tamanho){
        return 0;// invalido
    }
    for(int i = l->tamanho; i >= posicao; i--){
        l->elementos[i] = l->elementos[i - 1];
    } 
    l->elementos[elemento - 1] = elemento;
    l->tamanho++;
    return 1;// sucesso
}

// Retirar um elemento da lista
int RetirarElemento(Lista *l, int posicao){
    if(listaVazia(l) || posicao < 1 || posicao > l->tamanho){
        return 0;// invalido
    }
    for(int i = posicao - 1; i < l->tamanho - 1; i++){
        l->elementos[i] = l->elementos[i + 1];
    }
    l->tamanho--;
    return 1;// sucesso
}