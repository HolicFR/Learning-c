#include <stdio.h>
 
enum Day {
  MONDAY,
  TUESDAY, 
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY 
};

int main() {
    enum Day today = TUESDAY;
     
    printf("Day today is: %d\n", today); //Output : 2

    return 0;

    

}