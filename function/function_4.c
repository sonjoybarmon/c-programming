#include<stdio.h>

void sum(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int total = a + b;
    printf("total: %d\n", total);
    return;
}

int main()
{
    sum();
    sum();
    sum();
    sum();
    sum();
    return 0;
}