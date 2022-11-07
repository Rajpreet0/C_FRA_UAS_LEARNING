#include <stdio.h>

struct interest_rate{
    double betrag, zinssatz, d_zins;
    float  f_zins;
};


int main() {
  
   struct interest_rate def;

    printf("------------- Aufgabe 2  -------------\n");

    // Nutzer gibt seinen Kapital Betrag ein
    printf("Bitte geben Sie einen Betrag ein: ");
    scanf("%lf", &def.betrag);
    printf("Ihr eingegebener Betrag ist: %lf €\n\n", def.betrag);
 
    // Nutzer gibt seinen Zinssatz ein
    printf("Bitte geben Sie einen Zinssatz ein: ");
    scanf("%lf", &def.zinssatz);
    printf("Ihr eingegebener Zinssatz ist: %lf Prozent  \n\n", def.zinssatz);

    printf("Berechnung beginnt...\n\n");

    // Float Zinssatz Berechnung --> Z=(K*p)/100
    def.f_zins = (def.betrag * def.zinssatz) / 100;
    printf("Ihr verzinster Betrag ist (float Wert): %f €\n\n", def.f_zins);
  
    // Double Zinssatz Berechnung --> Z=(K*p)/100
    def.d_zins = (def.betrag * def.zinssatz) / 100;
    printf("Ihr verzinster Betrag ist (double Wert): %lf €\n\n", def.d_zins);

    return 0;
}