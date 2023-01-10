#include <stdio.h>
#include <stdlib.h>

// Verkette Listen

/* +: Man kann einfach Sachen ändern/löschen, 2 Pointer umleiten
/  -: Die Daten liegen nicht hintereinander & Man kann den Weg nicht rückwerts gehen*/
//! Für einen Pointer im Struct werden Sachen nicht mit dem . aufgerufen sonder mit dem ->.

struct Knoten{                   // Die Information für eine Liste (2 Informationen notwendig: Das gespeicherte; Den Pointer zum Nachfolger)
    int zahl;                   // Die erste Information die gespeichert wird
    struct Knoten* nachfolger; // Verweis auf den Nachfolger der Liste durch den Verweis auf die jetztige Liste
};

//Ausgabe vom Knoten
// Knoten am Anfang ausgeben
void ausgabe(struct Knoten* anfang){
    struct Knoten* aktuelles_element = anfang; // Neue Variablen Deklaration 
    while(aktuelles_element != NULL){ // Solange die Information in der Liste nicht Null (Leer) ist, dann tuhe etwas
        printf("%d\n", aktuelles_element->zahl); // Gib mir die Zahl des akutellen Elementes in der Liste aus
        aktuelles_element = aktuelles_element->nachfolger; // Durch eine Liste iteriren
    }
};

//Am Anfang der Liste einfügen
struct Knoten* einfuegen(struct Knoten* liste, int neue_zahl){ // 2 Parameter: (1) Anfang der Liste, (2) Die neue Zahl
    struct Knoten* neuer_knoten; 
    neuer_knoten->zahl = neue_zahl; // Neue Zahl einfügen
    neuer_knoten->nachfolger = liste; // Die neue Zahl ist nun der Anfang also muss es auf den alten Anfang zeigen
    return neuer_knoten;
}


int main(){

    // Erste Variante
    struct Knoten eins;
    eins.zahl = 1;
    struct Knoten drei;
    eins.nachfolger = &drei;
    drei.zahl = 3;


    // Zweite Variante mit der manuellen Speicherplatz reservierung
    struct Knoten* vier = malloc(sizeof(struct Knoten));
    vier->zahl = 4;
    drei.nachfolger = vier;
    struct Knoten* fuenf = malloc(sizeof(struct Knoten));
    fuenf->zahl = 5;
    fuenf->nachfolger = NULL;
    vier->nachfolger = fuenf;

    // Zwei dazwischen packen währen der Laufzeit
    struct Knoten* neues_element = malloc(sizeof(struct Knoten));
    neues_element->zahl = 2; // Zwei wird in der Liste erstellt
    neues_element->nachfolger = eins.nachfolger; // Der Nachfolger von zwei ist der Nachfolger von eins also drei
    eins.nachfolger = neues_element; // Der Nachfolger von eins ist nun nicht mehr drei sondern das neue Element => 2

    // Neue Listen Element auf Anfang erstellen
    struct Knoten* listenanfang = &eins;
    listenanfang = einfuegen(&eins, 42);
    ausgabe(listenanfang);

    // Funktion zur Ausgabe der Liste - Man muss nur den Anfang wissen
    //ausgabe(&eins);

    free(vier);
    free(fuenf);

    return 0;
}