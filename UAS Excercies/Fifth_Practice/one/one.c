#include <stdio.h>

/* Aufgabe 1  */


int main(){
   
    /* a) Geben Sie anschließend die Summe der Zahlen auf dem Bildschirm aus */
    /* b) Geben Sie die größte und kleinste eingegebnen Zahlen auf den Bildschirm aus */

    double num;
    double max;
    double min;
    double sum;

    do{

      printf("Bitte gebe eine Zahl ein (0 fuer Abbruch): ");
      scanf("%lf", &num);
      sum = sum + num; // Nimm die eingegebnen Zahlen und addiere Sie immer wieder 

      // Maximum einer Zahl checken
      if(num > max){
        max = num;
      } else if (num < min) { // Minimum einer Zahl checken
        min = num;
      }   

    } while (num != 0);

     printf("Die Summe der eingegebenen Zahlen lautet: %.2lf\n", num); // Gib die End Summe aus

  
    // Ausgabe von Minimum und Maximum
     printf("Das Maximum ist: %.2lf\n", max);
     printf("Das Minimum ist: %.2lf\n", min);
     
    


    return 0;
}