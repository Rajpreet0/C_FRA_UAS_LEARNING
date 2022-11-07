#include <stdio.h>

/* ---------  AUFGABE 2 ---------*/

int main(){
 
    printf("------------- Aufgabe 2  -------------\n");

    // Benutzer soll einen Betrag eingeben
    // Fließkommazahl wird eingelesen
    double betrag;

    printf("Bitte geben Sie einen Betrag ein: ");
    scanf("%lf", &betrag);
    printf("Ihr eingegebener Betrag ist: %lf €\n\n", betrag);

   
    // Bentuzer soll einen Zinssatz eingeben
    // Zinssatz als Fließkommazahl
    double zinssatz;
    
    printf("Bitte geben Sie einen Zinssatz ein: ");
    scanf("%lf", &zinssatz);
    printf("Ihr eingegebener Zinssatz ist: %lf Prozent  \n\n", zinssatz);


   printf("Berechnung beginnt...\n\n");
   
   /* BERECHNUNG DES VERZINSTEN BETRAGS  */

    /* Zinssatz Formel:

      p = (Z/K) * 100 
      
      Z := Zinsstaz 
      K := Kapital (Betrag)
      p := Prozentanteil (verzinste Betrag)


      -------------------- oder -------------------

      Z = (K*p)/100

      Z := Zinsstaz 
      K := Kapital (Betrag)
      p := Prozentanteil (verzinste Betrag)

   */ 

   // float version

   float f_zins;

   //f_zins = (zinssatz / betrag) * 100 ;
     f_zins = (betrag * zinssatz) / 100;
  

   printf("Ihr verzinster Betrag ist (float Wert): %f €\n\n", f_zins);


   // double version

   double d_zins;
  
   //d_zins = (zinssatz / betrag) * 100 ;
     d_zins = (betrag * zinssatz) / 100 ;

   printf("Ihr verzinster Betrag ist (double Wert): %lf €\n\n", d_zins);







    return 0;
}