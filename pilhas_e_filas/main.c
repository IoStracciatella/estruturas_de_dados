#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

int main () {
    deque caio;
    caio = criaDeque();

    push_front(3, caio);
    push_front(7, caio);
    push_front(11, caio);

    imprimeDeque(caio);

    push_back(30, &caio);
    push_back(35, &caio);

    pop_back(&caio);
    pop_front(caio);

    imprimeDeque(caio);

    imprimeDeque(caio);
}