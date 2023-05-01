#include<stdio.h>
#include<string.h>

int main(){
    
    char str[1001];
    int i, len, count=0;
    scanf("%s", str);
    // check str length
    len = strlen(str);
    for(i=0; i<len; i++){
        // check Vowels
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            // increase count
            count++;
        }
    }
    // print count
    printf("%d", count);
    return 0;
}


// ## Problem Statement

// You will be given a string S as input contains only small English alphabets. You need to tell the number of vowels in it. The string will not contain any spaces.

// Note: Vowels are a,e,i,o and u

// 1. Input Format

// #. Input will contain a string S.

// ##Constraints

// 1 <= |S| <= 1000 ; Here |S| means the length of string S.


// Output Format

// 1. Output the number of vowels.


// 1. Sample Input 0

// thefoxisgone

// 1. Sample Output 0

// 5

// 2. Sample Input 1

// ilikeassignments

// 2. Sample Output 1

// 6

