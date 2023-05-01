#include<stdio.h>
#include<string.h>
int main()
{
    char l[1001];
    char t[1001];
    scanf("%s %s", l, t);
    // get length of s
    int len = strlen(l);
    // get length of t
    int len2 = strlen(t);

    // print now
    printf("%d %d\n", len, len2);
    // print s + t
    printf("%s %s\n", l, t);

    return 0;
}