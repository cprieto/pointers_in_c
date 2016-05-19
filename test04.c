#include <stdio.h>

int main() {
    int vector[] = {28, 41, 7};
    int *p = vector; // an array is just a pointer to the first element

    printf("p address: %p and value: %d\n", p, *p);
    p += 1;
    printf("p address: %p and value: %d\n", p, *p);
    p += 1;
    printf("p address: %p and value: %d\n", p, *p);
    p -= 1;
    printf("p address: %p and value: %d\n", p, *p);
}
