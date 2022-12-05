#include <stdio.h>
#include <stdlib.h> 

 //*   ---------------- FUNCTION --------------------


/* 
   > Es soll ein Integer zurücgeben werden
   >  Außerdem soll der Function ein einen Datentyp Integer mit x gegeben werden
*/
int quadrat(int x){ 
     int ergebnis;
     ergebnis = x*x;
     return ergebnis;
}



// Eine Function die nichts zurückliefert --> void
void eingabeaufforderung() {
    printf("Bitte gib eine Zahl ein: ");
    // return nicht notwendig
}

// Eine Function die nichts zurückliefert, der ich aber eine Zahl gebe
void ausgabe(int x){
    printf("Die Zahl lautet %d. \n", x);
}

void ausgabeQuadrat(/*int a, int b*/ int zahl){
    //printf("Das Quadrat von %d ist %d. \n", a, b);
    
    printf("Das Quadrat von %d ist %d.\n", zahl, quadrat(zahl));
}

// Summen Funktion

int summe(int a, int b){
   return a+b;
}


//! Refernezparameter bzw. in C sind das mit Pointer programmiert 
// In C kann man im Retrun nur eine Zahl zurückgegebn, deswegen Referenzparameter
void eingabe(int* a, int* b) {
    int a,b;
    eingabeaufforderung();
    scanf("%d", a);
    eingabeaufforderung();
    scanf("%d", b);
}


//! Variable um 1 erhöhen
/*int inkrementieren(int x){
    return x+1;
}*/

// Ohne int 
void inkrementieren(int* x){
    *x = *x + 1;
}


int main() {

    //* Varianten vom Ausgeben der Funktion

    int x = 7;
    int y;

    eingabeaufforderung(); // Aufforderung der Function
    y = quadrat(x);


    int z = quadrat(10);
    printf("Das Quadrat ist %d\n", z);


   
    int zahl;
    printf("Bitte gib eine Zahl ein: ");
    scanf("%d", &zahl);
   // zahl = quadrat(zahl);
   // printf("Die Quadrat Zahl ist: %d", zahl);

   printf("Das Quadrat von %d ist: %d\n", zahl, quadrat(zahl));

   ausgabe(zahl); // zahl ist jetzt von main() aber an der Stelle von x


    // ausgabeQuadrat(zahl, quadrat(zahl));  Function in einer anderen Function

    ausgabeQuadrat(zahl);

    printf("Und das Doppelte von %d ist %d\n", zahl, summe(zahl, zahl));

   
    // Referenzparameter ausgabe
    int eingabe1, eingabe2;
    eingabe(&eingabe1, &eingabe2);
    printf("Die erste Zahl %d und die Zweite Zahl ist %d\n", eingabe1, eingabe2);


    //Inkrementierung
    inkrementieren(zahl);

    return 0;
}