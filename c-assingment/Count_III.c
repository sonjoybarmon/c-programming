#include <stdio.h>
#include <string.h>

int main() {
   char S[1000];
   int count[26] = {0}, i, length;
//    Enter the string S
   scanf("%s", S);
   length = strlen(S);
   for(i=0; i<length; i++) {
      count[S[i]-'a']++;
   }
//  The frequency of each alphabet is
   for(i=0; i<26; i++) {
    printf("%c - %d\n", i+'a', count[i]);
   }
   return 0;
}
