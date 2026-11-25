#include <stdio.h>

void atualiza(int **pp, int *v1, int *v2) {     // pp = &p | v1 = &n1 | v2 = &n2. Alterar esses irá alterar os principais
    **pp = **pp + 5;        // 15 = (**pp = n1 = 10) + 5 | n1 = 15
    *pp = v2;               // *pp muda o alvo para o v2, que é o n2
    **pp = **pp + 10;       // 110 = (**pp = n2 = 100) + 10 | n2 = 110
}

int main() {
    int n1 = 10, n2 = 100;
    int *p = &n1;                               // *p = 10 | p = &n1

    atualiza(&p, &n1, &n2);

    printf("n1 = %d, n2 = %d, *ptr = %d\n", n1, n2, *p);    // n1 = 15 | n2 = 110 | *ptr = 110
    return 0;
}