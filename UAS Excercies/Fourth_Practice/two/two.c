#include <stdio.h>

struct variables {
    double x;
    double y;
    double sum;
};

int main() {
    
   struct variables variables;

   printf("Bitte geben Sie hier ihre erste Zahl ein: ");
   scanf("%lf", &variables.x);
   printf("Bitte geben Sie hier ihre zweite Zahl ein: "); 
   scanf("%lf", &variables.y);
  
   printf("Ihre beiden eingegebenen Zahlen sind einmal %.2lf und %.2lf\n", variables.x, variables.y);
   
   variables.sum = variables.x + variables.y;

  
    // a) 

   // If the Variable is an Integer than Cast the Double into a Integer
   if(variables.sum == (int)variables.sum){
      printf("Die Summe beider Zahlen ist: %.lf + %.lf = %.lf\n\n", variables.x, variables.y, variables.sum);
   } else{
     printf("Die Summe beider Zahlen ist: %.2lf + %.2lf = %.2lf\n\n", variables.x, variables.y, variables.sum);
   }
 
   printf("\n\n");
 
   // b) 

   if(variables.sum == (int)variables.sum) {
     printf("Die Summe beider Zahlen ist: %.lf + %.lf = %.lf\n\n", variables.x, variables.y, variables.sum);
   } else if (variables.sum){

   }
    
      // Eine Kommazahl

   variables.sum_two = variables.sum_two * 10;

   if(variables.sum_two == (int)variables.sum_two) {
     printf("Summe mit einer Nachkommastelle: %.1lf", variables.sum);
   }


   variables.sum_three = variables.sum_three * 100;

    if(variables.sum_two == (int)variables.sum_two) {
     printf("Summe mit einer Nachkommastelle: %.2lf", variables.sum);
   } else {
     printf("Summe mit einer Nachkommastelle: %.3lf", variables.sum);
   }

    return 0;
}
