#include <stdio.h>

/* Aufgabe Nr.2  */

int main() {

    char array[27];
    int i;
   
    printf("Bitte geben Sie etwas ein: ");
    scanf("%s", array);
    

    for(i=0; i<27; i++){
       if(array[i] == '\0'){
          printf("Die Zeichenkette ist nun zu Ende");
          i = i +27;
       }else {
        printf("Das Zeichen am Index %d hat den ASCII Wert %c \n", i+1,array[i]);
       }
    }


    return 0;
}

/* Mit Endlos Schleife ist es egal wie lang der String ist....

int main() {
   char string[100];
   int i;
   printf("Bitte geben Sie etwas ein: ");
   scanf("%s", string);
   while (1) {
      if (string[i] == '\0') {
         break;
      }
      print
   }
}
*/