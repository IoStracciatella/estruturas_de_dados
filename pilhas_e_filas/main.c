#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *prox;
    struct node *ant;
} node;

//Inserir no final
void push_front (int valor, node *head) {
    node *novo = malloc(sizeof(node));
    novo->valor = valor;
    novo->prox = NULL;
    novo->ant = NULL;

    node *atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    atual->prox = novo;
    novo->ant = atual;
}

//LEMBRE-SE QUE O PARÂMETRO **head REQUER UM PONTEIRO PARA PONTEIRO
void push_back (int valor, node **head) {
    node *novo = malloc(sizeof(node));
    novo->valor = valor;
    novo->prox = *head;
    novo->ant = NULL;

    *head = novo;
}

void imprimeDeque (node *head) {
    node *atual = head;
    
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }
}

node *criaDeque () {
    node *novo = malloc(sizeof(node));
    novo->valor = 0;
    novo->prox = NULL;
    novo->ant = NULL;
}

typedef node *deque;

int main () {
    deque caio;
    caio = criaDeque();

    push_front(3, caio);
    push_front(7, caio);
    push_front(11, caio);

    imprimeDeque(caio);

    push_back(30, &caio);
    push_back(35, &caio);

    imprimeDeque(caio);
}