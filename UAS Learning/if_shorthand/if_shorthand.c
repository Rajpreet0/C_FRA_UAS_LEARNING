#include <stdio.h>

//  It can be used to replace multiple lines of code with a single line

int main() {
 
   /* -------- TERNARY OPERATOR -------- */

      /* SYNTAX

       variable = (condition) ? expressionTrue : expressionFalse;
    */

   int time = 20;

   // Explained: It is literally the same as the traditional if-else Statement
   // We test if the is below 20 -> if this is true than print["Good day"] -> if this is false than print("Good evening")
   (time < 18) ? printf("Good day") : printf("Good evening.");

    return 0;
}