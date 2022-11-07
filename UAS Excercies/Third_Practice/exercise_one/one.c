#include <stdio.h>

/* ---------  AUFGABE 1 ---------*/


int main() {
  
   printf("------------- Aufgabe 1 a) -------------\n");

   int zahl;

   printf("Bitte gebe eine Zahl ein: ");
   scanf("%d", &zahl);   // Die Referenzierung in einem scanf Statement ist das Kaufmannische &
   printf("Die eingegebene Zahl ist: %d", zahl);


   printf("\n\n");

   printf("------------- Aufgabe 1 b) -------------\n");

    printf("Bitte gebe erneut eine Zahl ein: ");
    scanf("%d", zahl); // Gibt ein Fehler zurück - Segmentation Fail
    printf("Die eingegebene Zahl ist: %d", zahl);

    printf("\n\n");
    printf("------------- Aufgabe 1 c) -------------\n");
    
    printf("");


    return 0;
}