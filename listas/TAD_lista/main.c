#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main() {
    lista lista1 = criaLista();

    addFim(lista1, 2);
    addFim(lista1, 25);
    addFim(lista1, 18);
    addFim(lista1, 40);

    imprimirLista(lista1);
    
    return 0;
}
