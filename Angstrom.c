#include <stdio.h>
#include <math.h>
int main() {
   int num, onum,r, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);
   onum = num;
   for (onum = num; onum != 0; ++n) {
       onum /= 10;
   }

   for (onum = num; onum != 0; onum /= 10) {
       r = onum % 10;
      result += pow(r, n);
   }
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}