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

int main() {
    node *head;
    head = malloc(sizeof(node));
    head->valor = 5;
    head->prox = NULL;

    node *atual;
    atual = malloc(sizeof(node));
    atual->valor = 8;
    atual->prox = NULL;
    head->prox = atual;

    atual = malloc(sizeof(node));
    atual->valor = 13;
    atual->prox = NULL;
    head->prox->prox = atual;

    addFim(head, 23);
    addFim(head, 33);

    atual = head;

    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }
    
    return 0;
}
