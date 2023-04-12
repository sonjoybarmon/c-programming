#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, max = INT_MIN , min = INT_MAX;

    for (int i = 0; i <= n; i++) {
        // find max
        scanf("%d", &a);
        if(a > max) {
            max = a;
        };
        // find min value
        if(a < min) {
            min = a;
        };
    };

    printf("%d\n", max);
    // printf("%d\n%d\n", min, max);
    return 0;
}