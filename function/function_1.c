#include<stdio.h>


// function declaration
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main()
{
    int total = add(10, 20);
    printf("Total: %d\n", total);
    return 0;
}