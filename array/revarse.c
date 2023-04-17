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

    // reverse
    int x = 0, y = n - 1;

    while (x < y)
    {
        // store init data
        int temp = a[x];

        // swap
        a[x] = a[y];
        a[y] = temp;
        x++;
        y--;

        /* code */
    }
    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    

    return 0;
}