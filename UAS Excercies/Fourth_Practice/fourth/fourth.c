#include <stdio.h>

struct  variables
{ 
    double two_euro;
    double one_euro;
    
    double fifty_cent;
    double twenty_cent;
    double five_cent;
    double two_cent;
    double one_cent;
    
    double betrag;

} ;

struct  table
{
    double p_two_euro;
    double p_one_euro;
    
    double p_fifty_cent;
    double p_twenty_cent;
    double p_five_cent;
    double p_two_cent;
    double p_one_cent;
};



int main(){
    
    struct variables variables = {2.00, 1.00, 0.50, 0.20, 0.05, 0.02, 0.01};
    struct table table;
    

    printf("Wie groß ist der Euro-Betrag, welcher in moeglichst wenig \n Muenzen aufgeteilt werden soll? [maximal 9.99]: ");
    scanf("%lf", &variables.betrag);

   /*
    if(variables.betrag >= variables.two_euro) {
      table.p_two_euro + variables.two_euro;

        if(variables.betrag >= variables.one_euro && variables.betrag < variables.two_euro){
            table.p_one_euro + variables.one_euro;
        }
            if(variables.betrag >= variables.fifty_cent && variables.betrag < variables.one_euro){
                table.p_fifty_cent + variables.fifty_cent;
            }
                if(variables.betrag >= variables.twenty_cent && variables.betrag < variables.fifty_cent){
                    table.p_twenty_cent + variables.twenty_cent;
                }

    } else {}*/

   // Man kann alles abfragen also:

   // Ist der Betrag größer als 1 blbalba 


   if (variables.betrag >= 2) {
     // Verschatlungen 
   }else {}

   if (variables.betrag >= 1) {
     // Verschatlungen 
   }else {}

   if (variables.betrag >= 0.50) {
     // Verschatlungen 
   }else {}
   
   if (variables.betrag >= 0.20) {
     // Verschatlungen 
   }else {}
   
   if (variables.betrag >= 0.10) {
     // Verschatlungen 
   }else {}


   if (variables.betrag >= 0.05) {
     // Verschatlungen 
   }else {}
   
   if (variables.betrag >= 0.02) {
     // Verschatlungen 
   }else {}
   
   if (variables.betrag >= 0.01) {
     // Verschatlungen 
   }else {}


   return 0;
}