//Neste código criamos uma lista simplesmente encadeada dinâmica, e diversas funções para podermos interagir com ela
//O objetivo do código é ser quase igual ao código "lista_simp_enc_din_basica.c", poré, com a adição de funções
//Assim, mantemos a simplicidade e damos uma noção de como usar funções em listas

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int dado;
    struct node *prox;
} node;

/*criarLista() faz a mesma coisa que declarar node *lista = malloc(sizeof(node)) direto na main,
só que encapsulado numa função, pra reaproveitar código e organizar melhor
Deve haver uma variável do tipo *node para receber o retorno desta função. Caso contrário a memória é alocada e perdida*/
node *criarLista () {
    node *novo = malloc(sizeof(node));
    novo->prox = NULL;

    return novo;
}

//Função pra inserir um novo node no início da lista
node *inserirInicio (node *lista, int dado) {
    node *novo = malloc(sizeof(node));
    novo->dado = dado;
    lista->prox = novo; //Ligando o ponteiro head da lista ao novo elemento
    novo->prox = lista->prox; //Ligando o novo elemento ao segundo elemento da lista
}

//Função que retorna a quantidade de nodes na lista
int contarNodes (node *head) {
    node *atual = NULL;
    atual = head;
    
    int contador = 0;

    if (head == NULL)
        printf("A lista esta vazia.");

    while (atual->prox != NULL) {
        contador++;
        atual = atual->prox;
    }
}

int main () {
    node *lista = criarLista(); //Lembrando: É a mesma coisa que declarar node *lista = malloc(sizeof(node))

    return 0;
}
