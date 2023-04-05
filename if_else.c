#include <stdio.h>

int main() {

    int a = 15;

    if( a > 10) {
        printf("a is greater than 10\n");
    } else {
        printf("a is less than 10\n");
    }

    // ones more

    if (a % 2 == 0) 
    {
        printf("The number %d is even.\n", a);
    } else {
        printf("The number %d is odd.\n", a);
    }

    // ones more 

    if (a % 2 == 0) 
    {
        printf("The number %d is even.", a);
    } else if (a % 3 == 0) {
        printf("The number %d is divisible by 3.", a);
    } else if (a % 5 == 0) {
        printf("The number %d is divisible by 5.", a);
    } else {
        printf("The number %d is not divisible by 2, 3 or 5.", a);
    }

    return 0;
}