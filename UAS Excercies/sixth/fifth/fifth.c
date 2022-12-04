#include <stdio.h>

int main() {
    
    char array[27];
    char e_array[27];
    int i = 0;
    int j = 0;
    int k = 0;

    // Benutzer gibt eine Zeichenkette ein
    printf("Bitt geben Sie etwas ein: ");
    scanf("%s", array);

    printf("\n");

    // Kontrollausgabe der Zeichenkette des Benutzers
    printf("Ihre Eingabe war: %s\n", array);


   //* ----------------------------------  ÄNDERUNGEN ----------------------------------

   // 1.Änderung werde Groß A zu B und Klein a zu b 
    while(i < 27){
        if(array[i] == '\0'){
            i = i + 27;
        } else if(array[i] > 64 && array[i] < 91 || array[i] > 96 && array[i] < 123){
           array[i] = array[i] + 1;   
        }
      i++;
    }
    

    printf("1. Aenderung: %s\n", array);
    

    // 2.Änderung 

    /*
     Ibmmp123Xfmu! --> iBMMP123xFMU! 
    */
    
    while(j < 27){
       if(array[j] == '\0'){
         j = j + 27;
       } else if(array[j] > 64 && array[j] < 91){
           array[j] = array[j] + 32;
       } else if(array[j] > 96 && array[j] < 123) {
           array[j] = array[j] - 32;
       }
      j++;
    }


     printf("2. Aenderung: %s\n", array);   


    //* ----------------------------------  ONLY CHARACTERS  ----------------------------------



     // iBMMPxFMU 

    printf("Buchstaben:");
   
     while(k < 27){
      if(array[k] == '\0'){
         k = k + 27;
       } else if((array[k] > 64 && array[k] < 91 ) || (array[k] > 96 && array[k] < 123)){
        printf("%c", array[k]);
       }
      k++; 
     }

     printf("\n");
      


 
    return 0;
}


