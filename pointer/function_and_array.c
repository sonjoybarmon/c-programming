#include<stdio.h>

void print_array(int *ptr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }
}

void array_point(int arr[] , int n) {
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i ,arr[i]);
    }
}


int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    print_array(arr, 5);
    array_point(arr, 5);
    return 0;
}