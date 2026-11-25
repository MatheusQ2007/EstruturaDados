#include <stdio.h>

int main(void) {

    int a = 10;     // Atribui 10 ao a
    int *p = &a;    // Atribui o endereço de a ao p
    int **pp = &p;  // Atribui o endereço de p ao pp
    // a ← p ← pp


    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %p\n", &a);
    printf("Valor de p: %d\n", *p);
    printf("Endereco de p: %p\n", &p);
    printf("Valor de pp: %d\n", **pp);
    printf("Endereco de pp: %p\n", &**pp);
    printf("\n");

    /////////////////////////////////////////////////
    *p = 20;      // Irá mudar o valor de *p que irá mudar o valor de a, passando a ser 20
    printf("Atribui 20 a *p\n");

    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %p\n", &a);
    printf("Valor de p: %d\n", *p);
    printf("Endereco de p: %p\n", &p);
    printf("Valor de pp: %d\n", **pp);
    printf("Endereco de pp: %p\n", &**pp);
    printf("\n");

    /////////////////////////////////////////////////
    **pp = 30;      // Irá mudar o valor de **pp que irá mudar o valor de a, passando a ser 30
    printf("Atribui 30 a **pp\n");

    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %p\n", &a);
    printf("Valor de p: %d\n", *p);
    printf("Endereco de p: %p\n", &p);
    printf("Valor de pp: %d\n", **pp);
    printf("Endereco de pp: %p\n", &**pp);
    printf("\n");

    /////////////////////////////////////////////////
    printf("Se houver um ponteiro para um ponteiro para a variavel, alterar o valor de qualqer um irá alterar o valor de todos. Seus endereços nao mudam, podendo apenas mudar o endereço o qual ele está apontando");

    return 0;
}
