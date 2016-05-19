#include <stdio.h>

int main() {
    int i = 5;
    const int j = i; // perfectly legal

    printf("i: %d and j: %d\n", i, j);

    i = 10;
    printf("i: %d and j: %d\n", i, j); // but j was a copy, no change
    // j = 20; // this is illegal

    int *pi = &i;
    *pi = 25; // We assign 25 as value to the address pointed by pi
    printf("i: %d and j: %d\n", i, j);

    const int *ci = &i;
    //*ci = 25; // this is illegal

    printf("i: %d and ci: %d\n", i, *ci);

    // We can still change that const indrectly
    i = 30;
    printf("i: %d and ci: %d\n", i, *ci);
}
