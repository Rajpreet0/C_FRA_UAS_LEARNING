#include <stdio.h>


/* AUFGABE NR.3  */

// -> Funktion zur Inkrementierung 


/* 
  Ausgabe 0
  Ausgabe 1
  Ausgabe 2

*/

/*int increment(int i){
  return i + 1;
}*/


// Schlaue Variante  --> Referenz (Pointer)
int increment(int* i){
  return *i += 1;
}

int main(){

    int i = 0;
  
    printf("%d\n", i);
    printf("%d\n", increment(&i));
    printf("%d\n", increment(&i));



 

    return 0;
}



