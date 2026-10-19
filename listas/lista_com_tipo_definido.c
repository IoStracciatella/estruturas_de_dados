//Essa lista, apesar de ser feita sem TAD, possui um tipo "lista" definido, podendo assim abstrair o conceito de lista
//e permitir ao usuário criar e interagir com listas de forma encapsulada

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *prox;
} node;

void addFim (node *head, int valor) {
    node *atual = malloc(sizeof(node));
    node *novo = malloc(sizeof(node));

    novo->valor = valor;
    novo->prox = NULL;

    atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    atual->prox = novo;
}

void imprimirLista (node *head) {
    node *atual = malloc(sizeof(node));

    atual = head;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }
}

node *criaLista () {
    node *novo = malloc(sizeof(node));
    novo->valor = 0;
    novo->prox = NULL;

    return novo;
}

typedef node *lista;

int main() {
    lista lista1 = criaLista();

    addFim(lista1, 2);
    addFim(lista1, 25);
    addFim(lista1, 18);
    addFim(lista1, 40);

    imprimirLista(lista1);
    
    return 0;
}
