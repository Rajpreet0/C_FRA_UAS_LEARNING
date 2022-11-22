#include <stdio.h>

/* Aufgabe 2 */

// (4) habe ich keine Ahnung

int main() {

    // Variablen Deklarieren

    // (1)
    int i;
    // (2)
    int counter = 1;

    // (4)
    int speicher[10];
    int j = 0;

    // (3) & (5)
    int num = 0;
    int sum = 0;
    int max = 0;
    int min;

    // (6)
    double averg;


    printf("Bitte geben Sie 10 ganze Zahlen ein. \n");

    // Nutzer soll 10 mal eine Zahl eingeben
    for(i=0; i < 10; i++) {
       // Hier soll angezeigt werden, um welche Zahl es sich gerade handelt (2)
       printf("%d. Zahl: ", counter);
       scanf("%d", &num);

      // Minimum und Maximum ermitteln der eingegeben Zahlen (3)
      if(num > max){
        max = num;
      } else if (num < min) {
        min = num;
      }

        // Summe aller Eingebenen Zahlen berechnen (3)
       sum = sum + num;

       // In einem Array die 10 Speicherplätze gleich der Eingabe setzen
       speicher[i] = num;

       // Erhöhe den Counter um 1
       counter++;
    }

    printf("Die Summe aller Zahlen ist: %d\n", sum);
    printf("Das Maximum der Zahlen ist: %d\n", max);
    printf("Das Minimum der Zahlen ist: %d\n", min);


    // Array ausgeben lassen
    while(j < 10){
     printf("Die %d. Zahl war die %d\n", j+1,speicher[j]);
     j++;
    }

    // (6) Durchschnitt berechnen
    averg = (double)sum/(counter - 1);
    printf("Der Durschschnitt der Zahlen ist: %.2lf\n", averg);

    return 0;
}
