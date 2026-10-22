//Implementação de uma pilha feita da forma mais simples possível
//A pilha por natureza é um conceito abstraído, portanto, nesse código não é diferente, temos um tipo pilha
//definido, e podemos interagir com uma pilha que é criada apenas através de funções

//A função push adiciona um elemento no final da pilha
//A função pop remove um elemento do final da pilha

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *prox;
} node;

void push (int valor, node *head) {
    node *novo = malloc(sizeof(node));
    novo->prox = NULL;
    novo->valor = valor;
    
    node *atual = head;

    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    atual->prox = novo;
}

void pop (node *head) {
    node *atual1 = head;
    while (atual1->prox != NULL) {
        atual1 = atual1->prox;
    }

    node *atual2 = head;
    while (atual2->prox->prox != NULL) {
        atual2 = atual2->prox;
    }

    free(atual1);
    atual2->prox = NULL;
}

node *criaPilha () {
    node *novo = malloc(sizeof(node));
    novo->valor = 0;
    novo->prox = NULL;

    return novo;
}

void imprimePilha (node *head) {
    node *atual = head;

    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }
}

typedef node *pilha;

int main () {
    pilha pilha1;
    pilha1 = criaPilha();

    push(3, pilha1);
    push(7, pilha1);
    push(11, pilha1);
    push(15, pilha1);
    push(19, pilha1);

    imprimePilha(pilha1);

    pop(pilha1);
    pop(pilha1);

    imprimePilha(pilha1);

    return 0;
}
