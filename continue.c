#include <stdio.h>

int main() {

    int i;
    for (i = 0; i <= 10; i = i + 1)
    {
        if (i == 5) {
            continue;
        }
        printf("%d\n", i);
    }


    return 0;
}