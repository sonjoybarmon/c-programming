#include <stdio.h>

int main() {
   int N, K, i, j;
   
   scanf("%d %d", &N, &K);
//    fot fot k times
   for(i=1; i<=K; i++) {
//       fot fot  from 1 to N
      for(j=1; j<=N; j++) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
