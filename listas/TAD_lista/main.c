#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main() {
    lista lista1 = criaLista();

    addFim(lista1, 2);
    addFim(lista1, 25);
    addFim(lista1, 18);
    addFim(lista1, 40);

    //Na hora da chamada da função addInico, deve ser passado como argumento o endereço do ponteiro
    //head (&lista1), ao contrário de simplesmente o endereço para onde ele aponta, como ocorre na
    //chamada de outras funções. Isso se deve ao fato de que, na definição dessa função, temos um
    //ponteiro para ponteiro
    addInicio(&lista1, 18);

    imprimirLista(lista1);
    
    return 0;
}
