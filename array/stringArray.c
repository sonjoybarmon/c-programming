#include<stdio.h>
int main()
{
    char a[6] = "sonjoy";
    for (int i = 0; i < 6; i++){
        printf("%c\t", a[i]);
    }

    char b[] = "sonjoy\0";

    int sz = sizeof(b) / sizeof(char);
    printf("%d\n", sz);

    printf("%s" ,b);

    return 0;
}