#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    // reverse
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    

    // sum
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum is %d\n", sum);
    
    return 0;
}