//Dica: Lembra que um ponteiro é uma forma de manipular um valor.
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

//No caso de structs é quase igual, com alguma diferenças: 
// - não precisa do operador & pra fazer um ponteiro apontar pra um valor struct
// - Acessamos os campos do tipo struct através do ponteiro usando o operador ->

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
