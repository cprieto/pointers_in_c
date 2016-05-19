#include <stdio.h>

int main() {
    int n = 100;
    int *pn = &n;

    printf("value of n: %i\n", n);
    printf("value of p: %p\n", pn);
    printf("address of n: %p\n", &n);
    printf("address of p: %p\n", &pn);
    printf("value of reference: %i\n", *pn);
}
