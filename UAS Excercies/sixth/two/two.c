#include <stdio.h>

int main() {

    // Deklaration der Variablen
    char array[12];
    char i;
    char temp;
    int eingabe;
   
   printf("Bitte geben Sie folgend 12 Zahlen ein!\n");

   // ******** EINGABE ********
    for(i=0; i<12; i++) {
       printf("Die %d. Zahl soll eine: ", i+1);
       scanf("%d", &eingabe);
       scanf("%c", &temp);
      
       temp = (char)eingabe;
       array[i] = temp; 
    }



    printf("\n\n");

    // ******** AUSGABE - ZEICHENKETTE ********
    printf("Die Ausgabe lautet  --> %s\n", array);

    

    return 0;
}