#include <stdio.h>

int main(){
    
    // int zahl[3];  Array, welche 3 Ganzzahlige Werte annimmt

    // zahl[0] = 42;  Der erste Speicherplatz ist hier der Index 0

    /* 
    Andere Schreibweise
    int zahl[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; */

   
    int zahl[10];  // <- Zahl ist ein int* (Integer Pointer) bei zahl[0]
    int x;

    for (x=0; x<10; x++) {
        zahl[x] = x*10;
    }

    for(x=0; x<10; x++) {
      printf("zahl[%d] = %d\n", x, zahl[x]);
    }
    
    // &zahl[x] ist das gleiche wie -> zahl+(x*4)
    // char ist der kleinste Datentyp -> geht in 1 Byte schritten 

    return 0;
}

/*
  Warum fangen wir bei 0 an ?

  -> weil es für den Computer einfacher ist

  In einem Speicherplatz für einen Array
    | | | | | |
  1008 (Speicherplatz Adresse)

  Wenn man den ersten Speicherplatz haben will,
  dann wäre das 1008 + 0 = 1008

*/