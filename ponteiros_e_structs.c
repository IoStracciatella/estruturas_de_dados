//Lembre-se: Um ponteiro é uma forma de manipular um valor.

//Sabendo disso, pense em um ponteiro como uma variável que pode 
//"assumir a forma de outra" e manipula-la

//Quando você atribui o ponteiro ao endereço de outra variável, você
//faz ele "assumir a forma" daquela variável usando &:
//int *p, num;
//p = &num;

//Feito isso, você pode manipular 'num' usando 'p', usando o 
//operador *
//*p = 24;
//agora o valor de 'num' é 24

//Ao invés de falar "assumir a forma de", falamos "apontar", mas expressa a mesma ideia

//No caso de structs é igual, com uma coisa a mais: Acessamos os campos do tipo struct
//através do ponteiro usando o operador ->

//Resumindo: Ponteiro é uma variável que consegue "contolar" uma outra variável de mesmo tipo

//DETALHE IMPORTANTE: Quando um ponteiro aponta pra um valor na memória, e não pra uma variável
//(como quando usamos malloc), não é necessário o operador &

#include <stdio.h>

int main () {
    typedef struct coisa {
        int valor1, valor2;
        char letra;
    } Coisa;

    Coisa coisa1, *coisa_p;

    coisa_p = &coisa1;

    coisa_p->valor1 = 52;

    printf("%d", coisa1.valor1);

    return 0;
}
