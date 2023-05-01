#include <stdio.h>

int main() {
   int N, A[100], X, i, count=0;
//    Enter the value of N
   scanf("%d", &N);
//    Enter the values of the array A
   for(i=0; i<N; i++) {
      scanf("%d", &A[i]);
   }
//    Enter the value of X
   scanf("%d", &X);
   for(i=0; i<N; i++) {
      if(A[i]==X) {
         count++;
      }
   }
   printf("%d", count);
   return 0;
}
