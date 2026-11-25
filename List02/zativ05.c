#include <stdio.h>
int main() {
    int v[5] = {2, 3, 5, 7, 11};
    int *p = v;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *p);
        *p++;   // Acrescentar *p fará ele correr o numero de bytes do seu tipo
                // Pode ser usado para percorrer vetores
    }

    return 0;
}