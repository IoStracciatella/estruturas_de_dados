//Neste código criamos uma lista simplesmente encadeada dinâmica, e diversas funções para podermos interagir com ela
//O objetivo do código é ser uma lista encadeada simples, porém, com a adição de funções
//Assim, mantemos a simplicidade e damos uma noção de como usar funções em listas, para podermos interagir com elas
//de forma abstrata

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *prox;
} node;

//Função pra adicionar nodes no final da lista
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

//Função pra adicionar nodes no início da lista
//Essa função faz o novo node apontar para o primeiro node da lista, e o ponteiro
//head que antes apontava pro início da lista, agora apontar para o novo node
//perceba que, apesar de simples, essa função precisa de um ponteiro pra ponteiro **head
//Isso se deve ao fato de que ela precisa alterar o endereço para onde o ponteiro *head
//passado como argumento aponta, e não apenas alterar um ponteiro local da função
void addInicio (node **head, int valor) {
    node *novo = malloc(sizeof(node));
    novo->valor = valor;
    novo->prox = *head;

    *head = novo;
}

/*criarLista() faz a mesma coisa que declarar node *lista = malloc(sizeof(node)) direto na main,
só que encapsulado numa função, pra reaproveitar código e organizar melhor
Deve haver uma variável do tipo *node para receber o retorno desta função. Caso contrário a memória é alocada e perdida
Essa função é muito útil quando conceito de lista for totalmente astraído*/
node *criarLista () {
    node *novo = malloc(sizeof(node));
    novo->prox = NULL;

    return novo;
}

//Conta quantos nodes tem na lista
int contarNodes (node *head) {
    node *atual = head;
    int contador = 0;

    //Se a lista estiver vazia, retorna zero
    if (head == NULL) {
        printf("A lista esta vazia.");
        return 0;
    }

    while (atual != NULL) {
        contador++;
        atual = atual->prox;
    }

    return contador;
}

int main() {
    //Criando uma lista que tem o primeiro node como sentinela. Ela será usada como argumento das funções
    node *head;
    head = criarLista();
    head->valor = 0;
    head->prox = NULL;

    int qtde_nodes;

    addFim(head, 23);
    addFim(head, 33);
    addInicio(&head, 47);
    addInicio(&head, 49);

    node *atual;
    atual = head;

    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }

    qtde_nodes = contarNodes(head);
    printf("%d", qtde_nodes);
    
    return 0;
}
