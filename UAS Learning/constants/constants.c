#include <stdio.h>

 /* Don't want to override exisitng variable values use "const" keyword */

int main() {


  /* -------- CONSTANTS -------- */
   
  const int minutesPerHour = 60;
  const float PI = 3.14;
  const int BIRTHYEAR = 1980;
  
  
  printf("%d\n", minutesPerHour);
  printf("%f\n", PI);
  printf("%d\n", BIRTHYEAR);
 
    return 0;
}