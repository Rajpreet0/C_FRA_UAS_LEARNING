#include <stdio.h>
#include <stdlib.h>

// Verkette Listen

// HAUSAUFGABE:
// Die Ausgabe in der umgekehrten Reihenfolge ausgeben in der Iterativen Ausgabe & mit der Rekuservien Ausgabe

struct Knoten{                   
    int zahl;                   
    struct Knoten* nachfolger; 
};

// Iterative Ausgabe
void ausgabe(struct Knoten* anfang){
    struct Knoten* aktuelles_element = anfang; 
    while(aktuelles_element != NULL){ 
        printf("%d\n", aktuelles_element->zahl); 
        aktuelles_element = aktuelles_element->nachfolger; 
    }
};

// Rekuserive Funktion zur Ausgabe der Liste
void ausgabe2(struct Knoten* anfang){
    printf("%d\n", anfang->zahl);
    if(anfang->nachfolger != NULL){
        ausgabe(anfang->nachfolger);
    }
}



//Liste am Anfang immer einfügen
struct Knoten* einfuegen(struct Knoten* liste, int neue_zahl){ 
    printf("Füge in die Liste %p die Zahl %d ein.\n", liste, neue_zahl);
    struct Knoten* neuer_knoten = malloc(sizeof(struct Knoten)); 
    neuer_knoten->zahl = neue_zahl; 
    //Sonderfall NULL wenn der Anfang der Liste Null ist dann zeigt er ja auf nichts, dass soll verhindert werden
    //sonst Segmentation Fault
    if(liste != NULL){
        neuer_knoten->nachfolger = liste; 
    } else {
        neuer_knoten->nachfolger = NULL;
    }
    return neuer_knoten;
}


//Liste am Ende einfügen
struct Knoten* einfuegen_ende(struct Knoten* liste, int neue_zahl){
    printf("Füge in die Liste %p die Zahl %d ein.\n", liste, neue_zahl);
    struct Knoten* iterator = liste;
    struct Knoten* neuer_knoten = malloc(sizeof(struct Knoten));
    neuer_knoten->zahl = neue_zahl;
    neuer_knoten->nachfolger = NULL;
    if(iterator == NULL){
        return neuer_knoten;
    }
    while(iterator->nachfolger != NULL){
        iterator = iterator->nachfolger;
    }
    iterator->nachfolger = neuer_knoten;
    
    return liste;
}



// Funktion zum Entleeren der Liste
//! Eventuelle Klausuraufgabe
void aufraeumen(struct Knoten* iterator){
    struct Knoten* nachestes_element;
    while(iterator != NULL){
        nachestes_element = iterator->nachfolger;
        printf("Lösche nun Element am Speicherplatz %p. \n", iterator);
        free(iterator);
        iterator = nachestes_element;
    }
}




int main(){

   struct Knoten* anfang = NULL;


   anfang = einfuegen_ende(anfang, 1);
   anfang = einfuegen_ende(anfang, 2);
   anfang = einfuegen_ende(anfang, 3);
   anfang = einfuegen_ende(anfang, 4);
   anfang = einfuegen_ende(anfang, 5);
   anfang = einfuegen_ende(anfang, 6);

   // Er gibt das dann von 6-1 aus, weil 1 das letzte Element der Liste ist
   ausgabe(anfang);

   
   //ausgabe2(anfang);

   // Die Liste komplett entleeren
   aufraeumen(anfang);

    return 0;
}



/* KLAUSUR

   -> Klausuraufgaben wäre keine ganze verkette Liste programmieren.
   -> Sondern nur wahrscheinlich einzelne Funktion einer Liste erstellen. 

*/