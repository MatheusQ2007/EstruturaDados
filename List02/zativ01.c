#include <stdio.h>

static void calcula(int a, int *b) {                    // Atribui a para 5 e b aponta para y
    printf("Funcao: a = %d, b = %d\n\n", a, *b);
    a = a + 10;                                         // a é somado a 10, virando 15
    *b = *b + a;                                        // b(y) é somado com o 15 de a, ficando 35
}

int main() {
    int x = 5;
    int y = 20;

    calcula(x, &y);                                     //Envia o valor 5 e o endereço de y por exemplo 0x100

    printf("Main: x = %d, y = %d\n", x, y);       //x retorna o mesmo 5, pois apenas a da funcao foi alterado, enquanto y foi alterado via ponteiro na funcao e retornará 35
    return 0;
}