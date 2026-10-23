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

//Remove um elemento do final do deque
void pop_front (node *head) {
    node *atual1 = head;
    node *atual2 = head;

    while (atual1->prox != NULL) {
        atual1 = atual1->prox;
    }

    while (atual2->prox->prox != NULL) {
        atual2 = atual2->prox;
    }

    free(atual1);
    atual2->prox = NULL;
}

//Remove um elemento do início do deque
void pop_back (node **head) {
    node *atual = (*head)->prox;
    free(*head);
    *head = atual;
}

//Imprime todos os elementos do deque
void imprimeDeque (node *head) {
    node *atual = head;
    
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }
}

//Cria um node sentinela pro deque
node *criaDeque () {
    node *novo = malloc(sizeof(node));
    novo->valor = 0;
    novo->prox = NULL;
    novo->ant = NULL;

    return novo;
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

    pop_back(&caio);
    pop_front(caio);

    imprimeDeque(caio);

    imprimeDeque(caio);
}
