#include<stdio.h>
#include<string.h>
int main()
{
    char a[24];
    gets(a);
    printf("%s\n", a);



    fgets(a, 2, stdin);
    printf("%s", a);
    return 0;
}