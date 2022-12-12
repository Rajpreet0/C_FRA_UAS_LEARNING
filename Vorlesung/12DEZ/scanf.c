#include <stdio.h>
#include <stdlib.h>


//! Wenn ich eine Datei in einer andere Datei reinkopieren will --> #include "readtext.c" (Pfadangabe)


// Eigenes Scanf
char* readtext(){
     
     int puffergroesse = 10;  // Reserviere erstmal 10 Byte im Speicher
     char* puffer = malloc(puffergroesse); 
     int eingabeposition = 0;  // Der Index (Laufvariable)
     char eingegebenes_zeichen;  // Das Zeichen was ich eingabe


    do{
        eingegebenes_zeichen = getchar();  // Nehme jedes eingegebene Zeichen von der Tastatur
       
        if(eingegebenes_zeichen != '\n'){     // Solange es kein Leerzeichen ist
            puffer[eingabeposition] = eingegebenes_zeichen; // Speicher jedes Eingegebene Zeichen von der Tastatur in einem Array
            eingabeposition++;  // Erhöhe den Index

           // Speichererweiterung falls mehr als 10 Byte gespeichert werden 
            if(eingabeposition == puffergroesse){
                puffergroesse = puffergroesse + 10;  // Erhöhe Speichergröße auf 10 Byte immer, wenn die eingebaposition gleich der puffergroesse ist
                puffer = realloc(puffer, puffergroesse); // Erst welcher Speicher, dann wie groß der Speicher nun jetzt sein soll
            }
        } 

    } while(eingegebenes_zeichen != '\n'); // Solange das eingegebene Zeichen nicht die Leertaste ist

   
    puffer[eingabeposition] = '\0'; // An der letzten Stelle des Arrays setzte dass dem Terminator Zeichen
    
    // Wenn im Array weniger Speicher verwendet wurde, als verfügbar dann setzte den Speicherplatz neu:
    puffer = realloc(puffer, eingabeposition+1);
    
    return puffer;
}


int main() {
  
   char* zeichenkette;
  
   printf("\n Geben Sie ein Zeichen ein: ");
   zeichenkette = readtext();   // Das neue scanf
   printf("Sie haben eingegebn: %s", zeichenkette);

   // Speicherplatz wieder freigeben
   free(zeichenkette);


    return 0;
}