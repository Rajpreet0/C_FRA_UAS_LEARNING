#include <stdio.h>

/* ---------  AUFGABE 7  ---------*/

/* TASK 
 
 >  Zuerst soll der Text Bitte einen Moment warten. Ich rechne... auf dem
   Bildschirm ausgegeben werden.

 > Deklarieren Sie nun drei Integer-Variablen x, y, und z. Die Variable x soll den Wert
   10, die Variable y den Wert 20 und die Variable z den Wert 30 haben.

 > Geben Sie nun die Summe der drei Variablen mit einem geeigneten Ausgabekommentar auf dem Bildschirm aus ohne das Ergebnis vorab in einer Variablen
   zwischen zu speichern. 

 > Nun deklarieren Sie erneut eine Integer-Variable für das Ergebnis der folgenden
   Berechnung: x×y ÷z. Speichern Sie das Ergebnis in dieser Variablen und geben
   Sie den Inhalt dieser Variablen mit einem geeigneten Ausgabekommentar auf dem
   Bildschirm aus.

 > Die ganzzahlige Division lässt sich nicht immer ohne Rundungsfehler durchführen.
   Berechnen Sie den Rest der letzten Division und geben Sie diesen als Fehlercode
   beim Beenden des Programms zurück. 

 */


int main() {
  
      int x = 10;
      int y = 20;
      int z = 30;
      int sum; 
      int div;
      int wrong;

      sum = x + y + + z; 
      div = x*y/z;
      wrong = sum % div;

    printf("Bitte einen Moment warten. Ich rechne...\n");
   
    printf("Das Ergebnis von %d + %d + %d = %d\n", x, y, z, sum);
    printf("Bitte einen Moment warten. Ich rechne wieder...\n"); 

    printf("Das Ergebnis von %d * %d / %d = %d\n", x, y, z, div);
   

    printf("Der Fehlercode ist nun %d\n", wrong);  // Ka ob das Richitg ist

    return 0;
}