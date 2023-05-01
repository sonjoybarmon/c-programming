#include<stdio.h>

int main(){
    int n, i, even_count=0, odd_count=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            // increase even number
            even_count++;
        }
        else{
            // increase odd number
            odd_count++;
        }
    }
    // print output
    printf("%d %d", even_count, odd_count);
    return 0;
}


// ##Problem Statement

// You will be given an integer array A of size N. You need to count the number of even elements and the number of odd elements in the array and print them.

// Input Format

// 1. First line will contain N, the size of the array
// 2. Second line will contain the array A.
// Constraints

// 1. 1 <= N <= 1000
// 2. 0 <= A[i] <= 100; here 0 <= i < N

// Output Format

// 1. Output the number of even elements first, then print the number of odd elements.

// 1. Sample Input 0

// 6
// 73 35 92 0 60 88 
// 1. Sample Output 0

// 4 2
// 2. Sample Input 1

// 3
// 7 3 10 
// 2. Sample Output 1

// 1 2
