// #include<stdio.h>
// #include<math.h>

// int main(){
//     int m1, m2, d;
//     float days;
//     scanf("%d %d %d", &m1, &m2, &d);
//     // m1 * d / m2 example: 10 * 15 / 5 = 30
//     days = ((float)m1 * (float)d) / (float)m2;
//     // print output
//     printf("%d", (int)ceil(days));

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int M1, M2, D;
//     scanf("%d %d %d", &M1, &M2, &D);

//     int total_work = M1 * D;
//     double work_per_day = total_work / (double)(M1 * D);
//     int days_required = (int)ceil(total_work / (double)(M2 * work_per_day));

//     printf("%d\n", days_required);
//     return 0;
// }


#include <stdio.h>

int main() {
   int M1, M2, D, days;
//    Enter the number of workers M1
   scanf("%d", &M1);
//    Enter the number of sick workers M2
   scanf("%d", &M2);
//    Enter the number of days D
   scanf("%d", &D);
   days = (M1 * D + M2 - 1) / M2; // formula to calculate days
//    It will take %d days for %d workers to complete the work
   printf("%d", days);
   return 0;
}
