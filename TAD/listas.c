#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

void addFim (node **head, int valor) {
  node *novo = malloc(sizeof(node));
  novo->valor = valor;
  novo->prox = NULL;

  if (*head == NULL) {
    *head = novo;
    return;
  }

  node *atual = *head;
  while (atual->prox != NULL) {
    atual = atual->prox;
  }

  atual->prox = novo;
}

void addInicio (node **head, int valor) {
  node *novo = malloc(sizeof(node));
  novo->valor = valor;

  if (*head == NULL) {
    *head = novo;
    return;
  }
  
  novo->prox = *head;
  *head = novo;
}

void mostra (node *head) {
  node *atual = head;
  while (atual != NULL) {
    printf("%d", atual->valor);
    atual = atual->prox;
}
