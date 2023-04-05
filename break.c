#include <stdio.h>

int main() {

    // 1st example

    int i;
    for (i = 0; i <= 10; i = i + 1)
    {
        if (i == 5) {
            break;
        }
        printf("%d\n", i);
    }

    // 2nd example
    int choice = 2;
    switch(choice) {
        case 1:
            printf("You chose 1.\n");
            break;
        case 2:
            printf("You chose 2.\n");
            break;
        case 3:
            printf("You chose 3.\n");
            break;
        default:
            printf("You chose something else.\n");
    }

    return 0;
}