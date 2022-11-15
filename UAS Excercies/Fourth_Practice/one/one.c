#include <stdio.h>

/*
  --------------- Aufgabe Nr.1 ------------------

    1. Benutzer auffordern, eine ganze Zahl einzugeben

    2. Einlesen der Zahl von der Tastatur

    3. Wenn die Zahl positiv ist, geben Sie den Text „Die Zahl ist positiv.“ auf dem Bildschirm aus.

    4. Wenn die Zahl negativ ist, geben Sie den Text „Die Zahl ist negativ.“ auf dem
       Bildschirm aus.

    5. Wenn die Zahl die Null ist, geben Sie den Text „Die Zahl ist die Null.“ auf dem
       Bildschirm aus.

    6. Wenn die Zahl im Bereich −128 und +127 liegt, geben Sie den Text „Diese Zahl
       könnte auch mit dem Datentyp char gespeichert werden.“

    7. Wenn die Zahl gerade ist, dann geben Sie den Text „Es handelt sich hierbei um eine gerade Zahl.“ auf dem Bildschirm aus. Ansonsten geben Sie den Text „Es
       handelt sich um eine ungerade Zahl.“ aus.

    8. Benutzer auffordern, eine weitere ganze Zahl einzugeben.

    9. Einlesen einer zweiten Zahl.

    10. Sofern diese zweite Zahl größer ist als die zuerst eingegebene Zahl, so geben Sie
        auf dem Bildschirm „Die zweite Zahl ist größer als die erste Zahl.“, sofern diese
        zweite Zahl kleiner ist, den Text „Die zweite Zahl ist kleiner als die erste Zahl.“,
        ansonsten den Text „Beide Zahlen sind gleich.“ aus.

    11. Berechnen Sie nun den Abstand beider Zahlen voneinander.1 Benutzen Sie keine
        Funktionen aus der mathematischen Bibliothek, sondern programmieren Sie es
        selbst!

    12. Geben Sie den Abstand auf dem Bildschirm aus.

*/

struct variables
{
    int zahl;
    int zweite_zahl;
    int abstand;
};


int main() {
 
    struct variables variables;
    
    // (1)
    printf("Bitte geben Sie eine ganze Zahl ein: ");
    // (2)
    scanf("%d", &variables.zahl);
    printf("Ihre eingebene Zahl ist %d\n\n", variables.zahl);

    printf("Außerdem ist die Zahl\n");
  
    // (3) Checken ob die Zahl Positiv oder Negativ ist
    if(variables.zahl > 0){
        printf("Die Zahl ist positiv\n");
    } else if(variables.zahl < 0){    // (4)
        printf("Die Zahl ist negativ\n");
    } else {                         // (5)
        printf("Die Zahl ist gleich null.\n");
    }
    

   printf("\n\n");
    
   // Ob die Zahl zwischen eine Wert liegt
   if(variables.zahl >= -128 && variables.zahl <= 128){  // (6)
     printf("Diese Zahl könnte auch mit dem Datentyp char gespeichert werden\n");
   } 

   printf("\n\n");

   // (7) Zahlen Check ob es gerade oder ungerade ist
   if(variables.zahl % 2 == 0){
      printf("Die Zahl ist gerade\n");
   } else {
     printf("Die Zahl ist ungerade\n");
   }
  
    printf("\n\n");

     

    // (8) Eingeben der zweiten Zahl
    printf("Bitte geben Sie eine weitere ganze Zahl ein: ");
    // (9)
    scanf("%d", &variables.zweite_zahl);
    printf("Ihre zweite eingebene Zahl ist %d\n\n", variables.zweite_zahl);
   
 
    // (10,11,12) Größen anzeigen und Abstand ausrechenen 
    if(variables.zahl <  variables.zweite_zahl) {
        printf("Die zweite Zahl ist größer als die erste Zahl\n");
        variables.abstand = variables.zweite_zahl - variables.zahl;
        printf("Der Abstand zwischen den Beiden Zahlen ist: %d", variables.abstand);
    } else {
        printf("Die zweite Zahl ist kleiner als die erste Zahl\n");
        variables.abstand = variables.zahl - variables.zweite_zahl;
        printf("Der Abstand zwischen den Beiden Zahlen ist: %d", variables.abstand);
    }

    return 0;
}