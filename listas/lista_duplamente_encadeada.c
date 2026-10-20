//Lista duplamente encadeada com 5 nodes, feita da forma mais simples
//possível: Adicionando os nodes manualmente

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *prox;
    struct node *ant;
} node;

int main () {
    node *head = malloc(sizeof(node));
    head->valor = 3;
    head->prox = NULL;
    head->ant = NULL;

    node *atual = malloc(sizeof(node));
    atual->valor = 7;
    atual->prox = NULL;
    atual->ant = head;
    head->prox = atual;

    atual = malloc(sizeof(node));
    atual->valor = 11;
    atual->prox = NULL;
    atual->ant = head->prox;
    head->prox->prox = atual;

    atual = malloc(sizeof(node));
    atual->valor = 15;
    atual->prox = NULL;
    atual->ant = head->prox->prox;
    head->prox->prox->prox = atual;

    atual = malloc(sizeof(node));
    atual->valor = 19;
    atual->prox = NULL;
    atual->ant = head->prox->prox->prox;
    head->prox->prox->prox->prox = atual;

    //Imprimindo do final da lista até o começo
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->ant;
    }

    //Imprimindo do primeiro node até o final
    atual = head; //Temos que fazer atual = head porque o ponteiro estava apontando pra NULL
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }

    return 0;
}