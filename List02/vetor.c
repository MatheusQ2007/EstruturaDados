#include <stdio.h>

int main(int argc, char *argv[]) {
    int vet[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("Valor de vet[%d] = %d\n", i, vet[i]);
        printf("Endereço de vet[%d] = %p\n", i, &vet[i]);
        printf("Valor de *(vet + %d) = %d\n", i, *(vet + i));

        printf("-==+==-\n");
    }

    return 0;
}
