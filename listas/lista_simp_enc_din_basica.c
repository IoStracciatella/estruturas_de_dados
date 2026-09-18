//Esse código cria uma lista simplesmente encadeada dinâmica com os elementos 17, 23, 55, 83, 91 nas respectivas posições 1, 2, 3, 4, 5
//No final, o código printa os elementos da lisat em ordem
//Essa é a implementação mais simples possível de uma lista encadeada dinâmica

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int dado;
    struct node *prox;
} node;

int main () {
    node *head = NULL; //Criando o ponteiro "head", que sempre aponta pro começo.
    head = malloc(sizeof(node)); //Criando o primeiro node da lista. O ponteiro head aponta pra ele agora.
    head->dado = 17;
    head->prox = NULL;

    node *atual = NULL; //Criando o ponteiro "atual", que é usado pra percorrer a lista.
    atual = malloc(sizeof(node)); //Criando o segundo node da lista. O ponteiro "atual" aponta pra ele agora.
    atual->dado = 23;
    atual->prox = NULL;
    head->prox = atual;

    atual = malloc(sizeof(node)); //Criando o terceiro node. O ponteiro "atual" aponta pra ele agora.
    atual->dado = 55;
    atual->prox = NULL;
    head->prox->prox = atual;

    atual = malloc(sizeof(node)); //Criando o quarto node. O ponteiro "atual" aponta pra ele agora.
    atual->dado = 83;
    atual->prox = NULL;
    head->prox->prox->prox = atual;

    atual = malloc(sizeof(node)); //Criando o quinto node. O ponteiro "atual" aponta pra ele agora.
    atual->dado = 91;
    atual->prox = NULL; //Como chegamos no fim da lista, o ponteiro do último node aponta para NULL, diferente dos outros.
    head->prox->prox->prox->prox = atual; 

    //Imprimindo todos os valores da lista
    atual = head;
    while (atual != NULL) {
        printf("%d\n", atual->dado);
        atual = atual->prox; //É assim que nos movemos em uma lista encadeada!
    }
    

    return 0;
}
