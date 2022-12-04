#include <stdio.h>


int main() {

  char array[26];
  int i = 0; 
  int j = 0;
  int len = 0;
  int temp = 0;

  printf("Bitte geben Sie etwas ein: ");
  scanf("%s", array);


  // Länge des Arrays herausfinden
  while(i < 26 && array[i] != '\0'){
    len++;
    i++;
  }

  
  char copy[len];
  while(j < len){
    copy[j] = array[j];
    j++;
  }

  printf("Die Länge des zweiten Arrays ist: %d\n", len);
  printf("Das eingegebene ist: %s", copy);



    return 0;
}