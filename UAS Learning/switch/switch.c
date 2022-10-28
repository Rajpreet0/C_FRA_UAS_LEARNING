#include <stdio.h>

// Instead of writing many if..else statements, you can use the switch statement.

int main() {

  /* -------- SWITCH STATEMENT -------- */
  
  /* SYNTAX
        
     switch(expression) {
        case x:
         //code block
         break;
        case y:
         //code block
         break;
        default:
         //code block 
     }   
  */

  /* Explained
    
    > The switch expression is evaluated once
    > The value of the expression is compared with the values of each case
    > If there is a match, the associated block of code is executed
    > The break statement breaks out of the switch block and stops the execution
    > The default statement is optional, and specifies some code to run if there is no case match
  */


  /* -------- BREAKDOWN KEYWORD -------- */

  // C reaches a break keyword, it breaks out of the switch block
  // This will stop the execution of more code and case testing inside the block
  
  // NOTE: A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block


  /* -------- DEFAULT KEYWORD -------- */

  // The default keyword specifies some code to run if there is no case match

  // NOTE: The default keyword must be used as the last statement in the switch, and it does not need a break


//__________________________________________________________________________________________________________________________________________________________________________


 // If the day is 4 than execute the default 
 // If the day is 7 than execute the 7th case
 // If the day is 6 than execute the 6th case

  int day = 4;

  switch (day) {
   case 6:
    printf("Today is Saturday"); 
    break;
   case 7:
     printf("Today is Sunday");
     break;
  default:
    printf("Looking forward to the Weekend!");
  }


    return 0;
}