#include <stdio.h>
#include <math.h>

/* Aufgabe 3 */



int main() {
   
     int darlehen; 
     double verzinst;
     int rueckzahlen;
  
     // Laufzeit der Jahre
     int jahr;

     /* Annuitaet berechnen
        
        A = (K * q^n * (q - 1)) / (q^n - 1)
        q = 1 + (P/100)
      */

     double q;
     double annuitaet;

     // Restschuld
     double restschuld;

     // Zinsen  --> Restschuld * (P/100)
     double zinsen;

     // Tilgung -->  Tilgung = Annuitaet - Zinsen
     double tilgung;

     

     printf("Wie hoch ist das Darlehen?: ");
     scanf("%d", &darlehen);
     
     printf("Zu wie viel %% wird verzinst?: ");
     scanf("%lf", &verzinst);

     
     printf("Wie viele Jahre Rueckzahldauer?: ");
     scanf("%d", &rueckzahlen);

     printf("\n\n");

     // Annuitaet berechnen
     q = 1 + (verzinst/100);
     annuitaet = (darlehen * pow(q, rueckzahlen) * (q - 1) / (pow(q, rueckzahlen) - 1));
      
      
      
     printf("Jahr\tRestschuld\tZinsen\t\tTilgung\t\tAnnuitaet\n");
     printf("______________________________________________________________________________\n");

     for(jahr = 1; jahr <= rueckzahlen; jahr++) {
        
        // Restschuld berechnung
        if(jahr != 1) {
          restschuld = restschuld - tilgung;
        } else {
        // Wenn es das erste Jahr ist dann gib mir einfach das Darlehen aus
         restschuld = darlehen; 
        }

        // Zinsen berechnen
        zinsen = restschuld * (verzinst/100);
        // Tilgung berchnen
        tilgung = annuitaet - zinsen;
       
         printf("%d\t%6.2lf\t%6.2lf\t\t%6.2lf\t%6.2lf\n", jahr, restschuld, zinsen, tilgung,annuitaet);
         
     }

     printf("______________________________________________________________________________\n");


    return 0;
}