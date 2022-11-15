#include <stdio.h>
#include <math.h>

 struct  variables
 {   
    int a;
    int b;
    int c;
    double pythagoras;
 };
 

int main() {
   
   struct variables variables;


   printf("Bitte geben Sie die Laenge der Seite von a ein: ");
   scanf("%d", &variables.a);
   printf("Bitte geben Sie die Laenge der Seite von b ein: "); 
   scanf("%d", &variables.b);
   printf("Bitte geben Sie die Laenge der Seite von c ein: "); 
   scanf("%d", &variables.c);
   
   // a^{2}+b^{2}=c^{2}

    /*
     ----- Einfache Version -----
    variables.pythagoras  = pow(variables.a, 2) + pow(variables.b, 2);
    
  
    if(variables.pythagoras == pow(variables.c, 2)){
        printf("c ist die Hypotenuse");
    } else { 
        printf("Das Dreieck hat keinen recheten Winkel");
    } */

 
   // Prüft welche der Eingegbenen Zahlen die größte ist und führt dann dementsprechend die Formel aus
    
    if(variables.a > variables.b && variables.a > variables.c){

        variables.pythagoras  = pow(variables.c, 2) + pow(variables.b, 2);
        if(variables.pythagoras == pow(variables.a, 2)){
           printf("a ist die Hypotenuse");
        } else {
            printf("Das Dreieck hat keinen recheten Winkel");
        }

    } else if (variables.b > variables.a && variables.b > variables.c){

        variables.pythagoras  = pow(variables.c, 2) + pow(variables.a, 2);
        if(variables.pythagoras == pow(variables.b, 2)){
           printf("b ist die Hypotenuse");
        } else {
            printf("Das Dreieck hat keinen recheten Winkel");
        }

    } else if (variables.c > variables.a && variables.c > variables.b){

        variables.pythagoras  = pow(variables.a, 2) + pow(variables.b, 2);
        if(variables.pythagoras == pow(variables.c, 2)){
        printf("c ist die Hypotenuse");
      } else {
        printf("Das Dreieck hat keinen recheten Winkel");
      }

    } else { // Wenn alle Zahlen gleich sind ist es ein gleichseitiges Dreieck => also keinen rechten Winkel
        printf("Hierbei handelt es sich um ein gleichseitiges Dreieck");
    }
    
    

    return 0;
}