//Lista encadeada circular feita da forma mais simples possível: Modificando diretamente os nodes

//Esse tipo de lista é quase igual a lista encadeada dinâmica normal, com a diferença que o ponteiro do último
//node aponta para o primeiro, e que, para percorrermos essa lista precisamos (quase sempre) utilizar um loop
//do while ao invés de while

//A vantagem desse tipo de lista é poder ficar percorrendo ela em loop, afinal o fim é o começo

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *prox;
} node;

int main () {
    node *head = malloc(sizeof(node));
    head->valor = 3;
    head->prox = NULL;
    
    node *atual = malloc(sizeof(node));
    atual->valor = 7;
    atual->prox = NULL;
    head->prox = atual;

    atual = malloc(sizeof(node));
    atual->valor = 11;
    atual->prox = head; //Último aponta pro primeiro
    head->prox->prox = atual;

    atual = head;
    
    int qtde, i = 0;
    scanf("%d", &qtde);

    while (i < qtde) {
        //Na hora de percorrer uma lista circular, vocẽ deve usar
        //um do while ao invés de um while, porque em todo
        //começo de lista, atual == head, então a condição
        //atual != head não é satisfeita. Isso é resolvido
        //justamente usando um do while
        do {
            printf("%d\n", atual->valor);
            atual = atual->prox;
        } while (atual != head);

        i++;
    }
}
