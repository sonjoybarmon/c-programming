#include<stdio.h>

int sum () {
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}

int main()
{
    int total = sum();
    printf("%d\n", total);
    return 0;
}