#include <stdio.h>

int main(){

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

    // ******** AUSGABE - UNTEREINANDER MIT ZAHL ********
    for(i=0; i<12; i++) {
        printf("Die %d. Zeichen ist ein %c oder als Zahl ein %d\n", i+1, array[i], array[i]);
    }

    printf("\n\n");

    // ******** AUSGABE - ZEICHENKETTE ********
    printf("Die Ausgabe lautet  --> %s\n", array);

    return 0;
}

/*
  LÖSUNGEN FÜR NR.1

 72, 97, 108, 108, 111, 32, 87, 101, 108, 116, 10, 0  --> Hallo Welt
 72, 97, 108, 108, 111, 0, 87, 101, 108, 116, 10, 32  --> Hallo [Sobald 0 eingegeben wird ist vorbei sonst Hallo Welt]
 48, 10, 49, 10, 50, 10, 51, 10, 52, 10, 0, 0         --> 0,1,2,3,4 [Untereinander]
 41, 61, 42, 62, 43, 63, 64, 44, 65, 45, 10, 0        --> )=*>+?@,A-
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11                 --> Die Ausgabe ist leer, weil nur Befehler hinteinander ausgeführt werden
 71, 101, 115, 99, 104, 97, 102, 102, 116, 33, 0, 0   --> Geschafft!

*/