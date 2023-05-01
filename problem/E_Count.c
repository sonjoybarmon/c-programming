#include<stdio.h>
int main() {
    char s[1000001];
    scanf("%s", s); // read input string
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        sum += s[i] - '0'; // add value of digit to sum
    }
    printf("%d", sum); // output sum of digits
    return 0;
}