#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s", a);


    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);

    int leg = strlen(a); 
    printf("%d", leg);

    return 0;
}