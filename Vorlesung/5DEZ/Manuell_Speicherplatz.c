#include <stdio.h>
#include <stdlib.h>


int main() {

    //*  Manuelles Speicherplatz reservieren  

    int groesse = 0;
    printf("Wie viel Speicherplatz soll reserviert werden? ");
    scanf("%d", &groesse);

    char* zeichenkette;                      // Mach zeichenkette als Pointer
    zeichenkette = malloc(groesse);         //TODO   malloc => MemoryAllocation 

    //TODO  zeichenkette = malloc(1000); -> Speicherplatz für 1000 Speicher reservieren;

    printf("Bitte geben Sie etwas ein: ");
    scanf("%s", zeichenkette);
    printf("Sie haben %s eingegeben. \n", zeichenkette);


    //TODO zeichenkette = realloc(zeichenkette, 100); --> Während das Programm läuft den Speicherplatz im Nachhinen verändern 

    free(zeichenkette); // Speicherplatz wieder freigeben 


    return 0;
}