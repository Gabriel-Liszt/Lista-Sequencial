#include <stdio.h>
#include "lista.h"

int main() {
    Lista l;
    criarLista(&l);

    // Inserir elementos
    inserirElemento(&l, 1, 10);
    inserirElemento(&l, 2, 20);
    inserirElemento(&l, 3, 30);
    printf("Tamanho da lista: %d\n", obterTamanho(&l));  

    // Obter elemento
    int elemento;
    if (obterElemento(&l, 2, &elemento)) {
        printf("Elemento na posição 2: %d\n", elemento);  
    }

    // Modificar elemento
    modificarElemento(&l, 2, 50);
    obterElemento(&l, 2, &elemento);
    printf("Elemento modificado na posição 2: %d\n", elemento); 

    // Retirar elemento
    retirarElemento(&l, 2);
    printf("Tamanho da lista após remoção: %d\n", obterTamanho(&l));  

    // Verificar se a lista está vazia
    printf("A lista está vazia? %s\n", listaVazia(&l) ? "Sim" : "Não");  

    return 0;
}