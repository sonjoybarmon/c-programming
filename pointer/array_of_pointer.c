#include<stdio.h>
int main()
{
    int ar[5] = {2, 3, 4, 56};

    printf("ar = %p\n", ar);
    printf("ar + 1 = %p\n", ar + 1);
    printf("*(ar + 1) = %d\n", *(ar + 1));
    printf("ar[1] = %d\n", ar[1]);
    printf("ar + 2 = %p\n", ar + 2);
    printf("*(ar + 2) = %d\n", *(ar + 2));



    return 0;
}