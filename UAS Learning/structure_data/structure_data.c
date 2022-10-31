#include <stdio.h>
#include <string.h> // To be able to define a String Value

// Just like Typescript
// Define in a different Structure (Function) the Variables with Variablesnames
struct artikelTyp {
    int anzahl;
    double preis;
    char bezeichnung[30];
};


int main() {
 
    // Giving the Function two Parameters to work with
    struct artikelTyp artikelEins, artikelZwei;

    // Now giving One Parameter each Variable in the Function a Value
    artikelEins.anzahl = 2;
    artikelEins.preis  = 1.45;
    // strcpy needed for assigning a String 
    strcpy(artikelEins.bezeichnung, "Apfel");

    // Do that again but now with the second Parameter
    artikelZwei.anzahl = 4;
    artikelZwei.preis  = 5.65;
    strcpy(artikelZwei.bezeichnung, "Banane");

    // Print all the Values inside a Table 
    printf(" %6d %7.2f € %8s \n %6d %7.2f € %8s", artikelEins.anzahl,
    artikelEins.preis, artikelEins.bezeichnung, artikelZwei.anzahl,
    artikelZwei.preis, artikelZwei.bezeichnung);

    return 0;
}