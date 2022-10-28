#include <stdio.h>

// You can use these conditions to perform different actions for different decisions

/*
*   Following Conditional Statements:
*   
*   if      = to specify a block of code to be executed, if a specified condition is true
*   else    = to specify a block of code to be executed, if the same condition is false
*   else if = to specify a new condition to test, if the first condition is false  
*   switch  = to specify many alternative blocks of code to be executed
*
*/

int main() {


//_______________________________________________________________________________________________________________________________________________________________________________
   
   /* -------- IF STATEMENT -------- */

   // Use the if statement to specify a block of C code to be executed if a condition is true

   /* SYNTAX
       
       if (condition) {
         //block of code to be executed if the condition is true
       }

       NOTE: An uppercase IF will generate an error

    */

   int x = 20;
   int y = 18;

   // Explained: We test if the 20 is greater than 18 -> if the condition is true than print the Text
   if (x > y){
     printf("x is greater than y\n");
   }

//_______________________________________________________________________________________________________________________________________________________________________________

   /* -------- ELSE STATEMENT -------- */
 
    // Use the else statement to specify a block of code to be executed if the condition is false
    
    /* SYNTAX
       
       if (condition) {
         //block of code to be executed if the condition is true
       } else {
         //block of code to be executed if the condition is false
       }

    */

   int time = 20;

   // Explained: We test if the time is below 18 -> if this is true than print["Good day"] -> but if this is false (above 18) than print["Good evening"]
   if(time < 18) {
     printf("Good day\n");
   }else {
     printf("Good evening\n");
   }

//_______________________________________________________________________________________________________________________________________________________________________________

   /* -------- ELSE IF STATEMENT -------- */

   // Use the else if statement to specify a new condition if the first condition is false.

    /* SYNTAX
       
       if (condition) {
         //block of code to be executed if the condition is true
       }else if (condition 2) {
         //block of code to be executed if the condition1 is flase and condition2 is true
       }else {
         //block of code to be executed if the condition1 is false and the condition2 is false
       }

    */

   int time_c = 19;

   // Explained: We test if the time is below 10 -> if this is true than print["Good morining"] -> 
   //            if this is false than we will test if the time is below 20 than print["Good day"] -> 
   //            if the second condition is also false than print["Good evening"], because the time is above 20
   if(time_c < 10){
    printf("Good morning.");
   }else if(time_c < 20) {
    printf("Good day.");
   }else {
    printf("Good evening.");
   }

    return 0;
}