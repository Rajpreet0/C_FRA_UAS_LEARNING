#include <stdio.h>

/* ---------  AUFGABE 5 ---------*/



int main() {

      // Überall fehlt ein \n
      // Es ist einfacher wenn man die Variabeln vorher definiert => übersichtilicher


      printf("%d", (8/5)/2); // Division mit ganzzahligen Werten -> Ergebnis aber 0,8 also eine Komma Zahl wird erwartet --> Fehler 
      printf("%f", (8/5)/2); 
      printf("%i", 8/(5/2)); // Division mit ganzzahligen Werten -> Ergebnis eine Komma Zahl wird erwartet --> Fehler 
      printf("%f", (float) 5/2); 
      printf("%f", (float) (5/2));
      printf("%d", (8/5.)/2);  //Syntaktisch falsch . führt zum fehler (außerdem ganzzahlig)
      printf("%lf", (8/5)/2.);  // lf = double Variable (8 Byte)
      printf("%d", (50/4)%2);
      printf("%d", (50%4)/2);
      printf("%d", 50%(4/2)); 

    
    
    return 0;
}