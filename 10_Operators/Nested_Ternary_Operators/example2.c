// In this program, we have used nested ifelse statements for the same purpose instead of conditional operators −

#include <stdio.h>

int main(){

   int a = 15;
   printf("a: %d\n", a);

   if(a % 2 == 0){
      if (a % 3 == 0){
         printf("divisible by 2 and 3");
      }
      else {
         printf("divisible by 2 but not 3");
      }
   }
   else{
      if(a % 3 == 0){
         printf("divisible by 3 but not 2");
      }
      else {
         printf("not divisible by 2, not divisible by 3");
      }
   }
   
   return 0;
}