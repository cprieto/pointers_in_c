#include <stdio.h> // printf
#include <stdlib.h> // malloc
#include <string.h> // strlen, strcpy

int main() {
    // it could be because you never release anything
    char *chunk;
    while (1) {
        chunk = (char *) malloc(1000000);
        printf("Allocating stuff\n");
    } // We never release shit, so we leak as bastards


    // it could be because we lost the pointer
    int *pi = (int *) malloc(sizeof(int));
    pi = (int *) malloc(sizeof(int));
    // See? the first pointer is lost!
    
    
    // it could be we lost the pointer but subtle
    char *name = (char *) malloc(strlen("Susan") + 1);
    strcpy(name, "Susan");

    while (*name != 0) {
        printf("%c", *name);
        name++; // We move the pointer to next element
    }
    // And magically, we lost reference to the beginning
}
