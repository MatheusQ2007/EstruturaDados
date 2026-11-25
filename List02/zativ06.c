#include <stdio.h>

int main(void) {
    int v[3] = {100, 200, 300};
    int *p = v;

    int a = *p++;       // *p++ = v[1]
    // Atribui, depois soma!!!

    int b = (*p)++;     // (*p)++ = Altera o valor de v[1], ficando 201
    int c = *p;         // Atribui o 201

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    // a = 100, b = 200, c = 201
    printf("v[0] = %d, v[1] = %d, v[2] = %d\n", *v, v[1], v[2]);
    return 0;
}