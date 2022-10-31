#include <stdio.h>

/* ---------  AUFGABE 6 ---------*/



int main() {
  
    printf("------------- Aufgabe 6 a) -------------\n");
      
    /*
     int main() {
       int weltbevoelkerung = 7932000000;
       printf(Hello alien, we are almost %d people on the earth!\n);
      return(0);
    }
    */
      
       // Keine "" und nicht definiert was in d rein soll und Zahlen Wert zu groß für ein Ineteger
       long long weltbevoelkerung = 7932000000;
       printf("Hello alien, we are almost %d people on the earth!\n", weltbevoelkerung);

    
    printf("------------- Aufgabe 6 b) -------------\n");
      
    /*
     int main() {
       char tage = 360;
       printf("%d Tage sind %d Wochen\n", tage, tage / 7);
      return(0);
    }
    */
      
       // Falscher Datentyp 
       int tage = 360;
       int div = tage / 7;
       printf("%d Tage sind %d Wochen\n", tage, div);


    printf("------------- Aufgabe 6 c) -------------\n");
      
    /*
     int main() {
       double zahl;
       printf("Bitte eine Fliesskommazahl eingeben: ");
       scanf("%f", zahl);
       printf("Ihre Zahl lautet %f\n",zahl);
      return(0);
    }
    */
      
       // Falscher Interpreter in printf 
       double zahl;
       printf("Bitte eine Fliesskommazahl eingeben: ");
       scanf("%lf", &zahl);
       printf("Ihre Zahl lautet %lf\n",zahl);



    return 0;
}