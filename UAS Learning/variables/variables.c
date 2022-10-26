#include <stdio.h>

/* In C, there are different types of variables (defined with different keywords) */

/* 
 * 
 * int   = stores integers (whole numbers), without decimals, such as 123 or -123
 * float = stores floating point numbers, with decimals, such as 19.99 or -19.99
 * char  = stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
 * 
*/

int main() {
    
    /* -------- DECLARING VARIABLES  -------- */

    /* Syntax
     * type variableName = value;
    */


   // variable called myNum of type int and assign the value 15 to it:
   int myNum = 15;

   // You can also declare a variable without assigning the value, and assign the value later:
   int mySecNum;
   mySecNum = 15;

   // !!! If you assign a new value to an existing variable, it will overwrite the previous value: !!!
   int myThirdNum = 15;  // myNum is 15
   myThirdNum = 10;  // Now myNum is 10  



   /* -------- OUTPUT VARIABLES  -------- */
   
   // A format specifier starts with a percentage sign %, followed by a character.
   
/* 
 * 
 * %d, %i   = int
 * %f       = float
 * %c       = char
 * 
*/

  int myIntNum = 5;
  float myFloatNum = 5.99;
  char myCharNum = 'D';

  printf("%d\n", myIntNum);
  printf("%i\n", myIntNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myCharNum);


   //To combine both text and a variable, separate them with a comma inside the printf() function:

   int myNumCombine = 15;
   printf("My favorite number is: %d\n", myNumCombine);

  // To print different types in a single printf() function, you can use the following:

  int myNumPrint = 5;
  char myLetterPrint = 'D';
  printf("My number is %d and my letter is %c\n", myNumPrint, myLetterPrint);

   

   /* -------- ADD VARIABLES TOGETHER   -------- */

  int x = 5;
  int y = 6;
  int sum = x + y; // To add a variable to another variable, you can use the + operator
  printf("%d", sum);

  

    return 0;
} 