#include <stdio.h>

int main() {
    int n = 100;
    int *p = &n;
    *p = 50;

    if (p) {
        printf("P is initialized\n");
    } else {
        printf("P is not initialized\n");
    }
}
