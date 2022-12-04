#include <stdio.h>

// ----------- Aufgabe Nr.6 ------------

int main() {
  

  char array[15];
  char umgedreht[15];
  int len = 0; 
  int temp = 0;
  int i = 0;
  int j = 0;

  // ----------- A) scanf("%s") ------------

  printf("Bitt gebe eine Zahl ein: ");
  scanf("%s", array);
  

 // Länge des Arrays ausgeben lassen 
  while(i < 15 && array[i] != '\0'){
    len++;
    i++;
  }
   
  // Das Array umdrehen
 
  temp = len;

  while(j < len){
    umgedreht[j] = array[temp-1];
    temp = temp - 1;
   j++;
  }

  printf("Umgedreht ist es: %s\n", umgedreht);



  // ----------- B) scanf("%i") ------------

  // Junge wenn ich jetzt noch b mache dann kriege ich einen Nervenzusammenbruch


    return 0;
}