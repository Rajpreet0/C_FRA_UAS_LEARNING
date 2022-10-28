#include <stdio.h>

// Logical operators are used to determine the logic between variables or values

int main() {
  
   /* -------- LOGICAL OPERATOR -------- */

   /* The && Operator 
   *
   *  && = Logical and 
   * 
   *  Returns true if both statements are true 
   * 
   */ 

   int x = 5;
 
   // Returns 1 [true], because 5 is greater than 3 AND [&&] 5 is less than 10
   printf("%d\n", x > 3 && x < 10);


   /* The || Operator 
   *
   *  || = Logical or 
   * 
   *  Returns true if one of the statements is true 
   * 
   */ 

   int x_op = 5;

   // Returns 1 [true], because one of the condition are true
   // (5 is greater than 3, but 5 is not less than 4)
   printf("%d\n", x_op > 3 || x_op < 4);


   /* The ! Operator 
   *
   *  ! = Logical not 
   * 
   *  Reverse the result, return false if the result is true 
   * 
   */ 

   int x_op_f = 5;

   // Returns 0 [false], because ! (not) is used to reverse the result
   printf("%d\n", !(x_op_f > 3 && x_op_f < 10));

    return 0;
}