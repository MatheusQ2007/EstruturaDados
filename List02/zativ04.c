#include <stdio.h>

int main(void) {
    int v[4] = {10, 20, 30, 40};
    int *p = v + 1;                 // p aponta para v[2] = 20

    *p = *p + 5;                    // 25
    *(p + 2) = *(p - 1) * 2;        // *(p + 2) = v[4] | *(p - 1) = v[1]
    // v[4] = 10 * 2 = 20

    printf("%d %d %d %d\n", *v, v[1], v[2], v[3]);
    // v[0] = 10 | v[1] = 25 | v[2] = 30 | v[3] = 20
    return 0;
}