#include <stdlib.h>

int main() {
    int *p1 = (int *) malloc(sizeof(int));
    *p1 = 5;

    int *p2 = p1;
    free(p1);

    *p2 = 10; // This a dangling pointer!
}
