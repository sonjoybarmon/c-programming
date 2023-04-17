#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    // 1st array
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);
    // 2nd array
    int y[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y[i]);
    }

    // copy array
    int full[n + x]; //n+x by length here
    for (int i = 0; i < n; i++)
    {
        full[i] = a[i]; // copy 1st array 
    }

    // story 2nd array in new array
    int i=n; // n er man ja ache setar por theke baranor jonno eykhane i = n mani i = 5 neoyar hoyeche

    // copy 2nd array
    for (int j = 0; j < x; j++)
    {
        full[i] = y[j];
        i++;
    }

    // print array
    for (int i = 0; i < n+x; i++)
    {
        printf("%d\t", full[i]);
    }




    return 0;
}