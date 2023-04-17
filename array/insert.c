#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    // length here
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // set value for loop
    int pos, val;
    scanf("%d %d", &pos, &val);
    for (int i = n; i >= pos + 1; i--)
    {
        a[i] = a[i - 1];
    }

    // set value
    a[pos] = val;

    // print the value
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}