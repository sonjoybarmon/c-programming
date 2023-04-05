#include<stdio.h>
int main() 
{
    int a = 10, b = 30;
    int sum = a + b;
    int mns = b - a;
    int bag = a / b;
    int mul = a * b;
    int mod = a % b;

    printf("%d\n %d\n %d\n %d\n %d\n", sum , mns,bag, mul, mod );

    return 0;
}