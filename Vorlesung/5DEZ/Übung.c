#include <stdio.h>
#include <stdlib.h>

int main() {
   
     int anzahl;
     int* zahlen;
     int i;

     printf("Wie viele Zahlen willst du eingegebn? ");
     scanf("%d", &anzahl);
     zahlen = malloc(anzahl * sizeof(int));  //TODO   sizeof(int) => Wie groß ist ein Integer und das * die Anzahl, weil Array => eine Zahl ist

     for(i=0; i<anzahl; i++){
         printf("Bitte gebe die %d. Zahl ein ", i+1);
         scanf("%d", &zahlen[i]);
     }

     for(i=0; i<anzahl; i++){
        printf("Die %d. Zahl ist %d. \n", i+1, zahlen[i]);
     }

     free(zahlen);


    return 0;
}