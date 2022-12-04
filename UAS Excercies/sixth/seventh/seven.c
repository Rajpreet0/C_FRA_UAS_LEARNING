#include <stdio.h>

// ----------- Aufgabe Nr.7 ------------


int main(){

   char array[15];
   int i = 0;
   int len = 0;
   int temp = 0;
   int j = 0;
   int operator = 1;
   int ergebnis = 0;
   int zwischenergebnis = 0;


   // Einlesen einer Positivien ganzen Zahl
   printf("Bitte geben Sie eine Positivie Ganze Zahl ein: ");
   scanf("%s", array);
  
   /* Umwandlung in ein Integer */ 
   
   // Länge des Arrays herausfinden
    while(i < 15 && array[i] != '\0'){
     len++;
     i++;
   }

   // Array Umwandlung in ein Integer
   temp = len ;

  while(j < len){
    ergebnis = (int)array[temp-1] * operator;
    zwischenergebnis = ergebnis + zwischenergebnis;
    temp = temp - 1;
    operator = operator * 10;
    j++;
  }

    printf("Gib mir das Ergebnis als Integer aus: %d", zwischenergebnis);

   

    return 0;
}