#include <stdio.h>

// -  Variable  x=-12 vorzeichenbehaftet
// - Varibale Vorzeichenlos 5
// - Fließkommazahl mit kontostand 543,21


int main() {


     /* ----------- Aufgabe Nr.8 -----------  */

    signed   int x =-12;
    unsigned int y = 5;
    float  konto = 534.21;

    int sum;
    float kontostand;

    sum = x + y;
    kontostand = sum + konto;

    printf("Der Inhalt der Variable x ist %d\n", x);
    printf("Der Inhalt der Variable anzahl ist %d\n", y);


    printf("Mein kontostand ist %.2f\n", konto);



    printf("\n\n");

    printf("--------- Aufgabe Nr.8 a) ------------\n");


    printf("Das Ergebnis von %d + %d ist gleich %d \n", x, y, sum);

    printf("\n\n");

    printf("--------- Aufgabe Nr.8 b) ------------\n");

    printf("Ihr Kontostand ist %.2f €\n", kontostand);

    printf("\n\n");

    printf("--------- Aufgabe Nr.8 c) ------------\n\n");

    printf("--------- c) (1)  ------------\n");

    printf("Die Adresse für x ist %p\n", &x);
    printf("Die Adresse für y ist %p\n", &y);
    printf("Die Adresse für den kontostand ist %p\n\n", &kontostand);

    printf("--------- c) (2)  ------------\n");

    int *p_x = &x;
    int *p_y = &y;
    float *p_kontostand = &kontostand;

    printf("Die Adresse für x ist %p\n", &p_x);
    printf("Die Adresse für y ist %p\n", &p_y);
    printf("Die Adresse für den kontostand ist %p\n\n", &p_kontostand);


    /* In  C sind die beiden Adressen unterschiedlich, da man sozusagen allen gespeicherten          Dinge einen neuen Speicherplatz (Adresse) zuordnet. */

}
