#include<stdio.h>

int sum(int x, int y) {
    int s = x + y;
    printf("total: %d", s);
    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}