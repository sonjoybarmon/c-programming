#include <stdio.h>

int main() {

    int i;

// for loop
    for (i = 1; i <= 5; i++) {
        printf("%d-for loop\n", i);
    }

// while loop
    i = 1;

    while (i <= 5) {
        printf("%d-white loop\n", i);
        i++;
    }

// do while loop

    i = 1;

    do {
        printf("%d-do while loop\n", i);
        i++;
    } while (i <= 5);

    return 0;

}