typedef struct node {
    int valor;
    struct node *prox;
} node;

void addFim (node *head, int valor);
void imprimirLista (node *head);
node *criaLista ();

typedef node *lista;
