#include<stdio.h>

void swap(int *a)
{
    *a = 500;
}

int main()
{
    int x = 100;
    printf("x of address - %p\n", &x );
    swap(&x);
    printf("x = %d\n", x);

    return 0;
}