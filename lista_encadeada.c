// Criando uma lista encadeada com os elementos 45, 98 e 3 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int dado;
    struct node *link;
};

int main () {
    struct node *head = malloc(sizeof(struct node));
    head->dado = 45;
    head->link = NULL;

    struct node *atual = malloc(sizeof(struct node));
    atual->dado = 98;
    atual->link = NULL;
    head->link = atual; // Linkando o primeiro node ao atual (segundo)

    atual = malloc(sizeof(struct node));
    atual->dado = 3;
    atual->link = NULL; // Esse node está linkado a NULL porque é o fim da lista
    head->link->link = atual; // Linkando o node anterior (segundo) a esse

    contar_nodes(head);
    imprimir_nodes(head);

    return 0;
}

void contar_nodes (struct node *head) {
    int contador = 0;
    
    if (head == NULL)
        printf("A lista esta vazia!");
    
    struct node *ptr = NULL;
    ptr = head; 

    while (ptr != NULL) {
        contador++;
        ptr = ptr->link; // Essa linha faz percorrer a lista
    }

    printf("%d", contador);
}

void imprimir_nodes (struct node *head) {
    int contador = 0;
    
    if (head == NULL)
        printf("A lista esta vazia!");
    
    struct node *ptr = NULL;
    ptr = head; 

    while (ptr != NULL) {
        contador++;
        ptr = ptr->link; // Essa linha faz percorrer a lista
    }

    printf("%d", contador);
}
