#include <stdio.h>

int main() {
    int vector = {10, 20, 30};
    int *p0 = vector;
    int *p1 = p0 + 1;
    int *p2 = p1 + 1;

    printf("p2-p0: %d\n", p2 - p0);
    printf("p2-p1: %d\n", p2 - p1);
    printf("p0-p1: %d\n", p0 - p1);
}