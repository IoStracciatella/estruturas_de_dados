#ifndef LISTAS_H
#define LISTAS_H

typedef struct node {
  int valor;
  struct node *prox;
} node;

typedef node *lista;

void addFim (node **head, int valor);
void addInicio(node **head, int valor);
void mostrar (node *head);

#endif
