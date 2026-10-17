//Nesse arquivo são criadas as funções e tipos que serão utilizados no main.c
#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

//A ideia dessa função é simples: Queremos adicionar um node com um novo valor no final da lista
//Para isso, tem que ser dados como argumentos da função:
// - Um ponteiro pro primeiro node de uma lista onde se quer inserir (node head)
// - Um valor a ser inserido (int valor)
//Dentro da função, é criado um novo ponteiro (*novo) que armazena o endereço do novo node, alocado na mesma linha
//O novo valor é inserido nesse node (novo->valor = valor), e o ponteiro do mesmo é setado pra NULL (novo->prox = NULL)
//Um loop while faz o ponteiro *atual percorrer até o último elemento da lista escolhida. Ao chegar no final da mesma
//(ao encontrar NULL), o loop para
//Agora, como estamos na última posição da lista, adicionar o novo node é fácil: Apenas atualizamos o ponteiro do
//último node da lista para apontar para para o novo node 
void addFim (node *head, int valor) {
    node *atual = head; //Esse ponteiro percorrerá a lista
    
    node *novo = malloc(sizeof(node)); //Esse ponteiro armazena o endereço do novo node que será adicionado
    novo->valor = valor;
    novo->prox = NULL;

    //Percorre até o último elemento da lista
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    //Linka o novo node no fim da lista
    atual->prox = novo;
}

//Função que percorre uma lista até o seu último elemento. Isto é, percorre a lista até encontrar NULL (que infica fim
//da lista)
//Cada elemento percorrido é impresso
void imprimirLista (node *head) {
    node *atual = malloc(sizeof(node));

    atual = head;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }
}

//Essa função apenas cria um node sentinela
//Isto é, um ponteiro 
node *criaLista () {
    node *novo = malloc(sizeof(node));
    novo->valor = 0;
    novo->prox = NULL;

    return novo;
}
