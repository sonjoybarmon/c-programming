#include <stdio.h>

int main() {
   char str[1000];
   int i, uppercase=0, lowercase=0;
   
   scanf("%s", str);
   for(i=0; str[i]!='\0'; i++) {
      if(str[i]>='A' && str[i]<='Z')
         uppercase++;
      else if(str[i]>='a' && str[i]<='z')
         lowercase++;
   }
   printf("%d %d", uppercase , lowercase);
   
   return 0;
}
