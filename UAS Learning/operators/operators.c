#include <stdio.h>

 /* Operators are used to perform operations on variables and values. */

int main() {


  /* -------- OPERATORS -------- */


   /* C divides the operators into the following groups
   *
   *
   * Arithmetic operators
   * Assignment operators
   * Comparison operators
   * Logical operators
   * Bitwise operators
   * 
   * 
   */ 

  /* -------- ARITHMETIC OPERATORS -------- */
   
    // Arithmetic operators are used to perform common mathematical operations.

  /* -------------- Addition --------------*/
   int sum_x = 5;
   int sum_y = 5;
  
   int sum = sum_x + sum_y;

   printf("%d\n", sum);

   /* -------------- Subtraction --------------*/
   int sub_x = 5;
   int sub_y = 5;
  
   int sub = sub_x - sub_y;

   printf("%d\n", sub);
  
   /* -------------- Multiplication --------------*/
   int mul_x = 5;
   int mul_y = 5;
  
   int mul = mul_x * mul_y;

   printf("%d\n", mul);

   /* -------------- Division --------------*/
   int div_x = 5;
   int div_y = 5;
  
   int div = div_x / div_y;

   printf("%d\n", div);

   /* -------------- Modulus --------------*/
   int mod_x = 5;
   int mod_y = 5;
  
   int mod = mod_x / mod_y;

   printf("%d\n", mod);
   
   /* -------------- Increment --------------*/
   int in_x = 5;
  
   // Increases the Value with +1 
   int in = ++in_x;

   printf("%d\n", in);

   /* -------------- Decrement --------------*/
   int de_x = 5;
  
   // Decrases the Value with -1 
   int de = --de_x;

   printf("%d\n", de);

   


    return 0;
}