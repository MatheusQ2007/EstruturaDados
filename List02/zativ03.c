#include <stdio.h>
int main() {
    int v[5] = {1, 2, 3, 4, 5};
    printf("Endereco de v: %p eh igual ao endereco de &v[0]: %p\n", v, &v[0]);
    printf("Ao pedir o endereco do vetor, ele pega o endereco do primeiro elemento.");
    return 0;
}