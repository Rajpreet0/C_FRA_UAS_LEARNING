#include <stdio.h>

#define MAX 1000 // Variablen vor definieren und dann einsetzten

int main() {
   
    char zeichenkette[MAX];
    int i = 0;
    printf("Bitte gebe etwas ein: ");
    do{
        zeichenkette[i] = getchar(); // Nimm ein Zeichen von der Tastatur und pack das in Zeichenkette
        i++;
    } while (zeichenkette[i-1] != '\n'); // Das einfache Einführungszeichen (' ') --> sagt dem Compiler guck mal in die ASCII Tabelle
                                      // \n ist ein Zeilenumbruch (Enter) = new line;

    /* 
       Minuszeichen, weil sonst ein Logikfehler, weil oben in der Schleife
       Enter = 10 und wir erhöhen um i++ also ist es gleich 11 und das ist nicht mehr Enter (10)
    */

    zeichenkette[i-1] = '\0';
    printf("\"%s\"\n", zeichenkette);


    return 0;
}