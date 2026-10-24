#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deque.h"

int main () {
    //Sempre que é criado um deque sem sentinela, deve-se inicializa-lo em NULL
    deque novoDeque = NULL;

    push_front(3, &novoDeque);
    push_front(7, &novoDeque);
    push_front(11, &novoDeque);

    imprimeDeque(novoDeque);

    push_back(30, &novoDeque);
    push_back(35, &novoDeque);

    pop_back(&novoDeque);
    pop_front(&novoDeque);

    imprimeDeque(novoDeque);

    imprimeDeque(novoDeque);
}
