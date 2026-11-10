#include <stdio.h>

int main (){

   /* local variable definition */
   char ch = 'a';
   printf("Time code: %c\n\n", ch);
   
   switch (ch){
      case 'a':
         printf("Good Afternoon\n");
         // break;
      
      case 'e':
         printf("Good Evening\n");
         // break;
      
      case 'm':
         printf("Good Morning\n");
   }
   return 0;
}