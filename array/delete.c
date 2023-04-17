#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // declare array
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    // delete
    int pos;
    scanf("%d", &pos);
    for (int i = pos; i < n; i++){
        a[i] = a[i + 1];
    }
   
    //    print array
    for (int i = 0; i < n - 1; i++){
        printf("%d\t", a[i]);
    }
    



    return 0;
}