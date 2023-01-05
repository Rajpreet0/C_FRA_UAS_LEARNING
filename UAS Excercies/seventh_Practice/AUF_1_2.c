#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void eingabeaufforderung(){
    printf("Es ist nun eine Benutzereingabe ist erforderlich\n");
    printf("Bitte geben Sie eine Zahl ein: ");
}

void eingabeaufforderung_zk(){
     printf("Es ist nun eine  Benutzereingabe ist erforderlich\n");
     printf("Bitte geben Sie nun eine Zeichenkette ein: ");
}

void ausgabe_int(int y){
    printf("Bitte geben Sie eine ganze Zahl ein: %d \n", y);
   // scanf("%d", &y);
   // return y;
}

void ausgabe_zk(char x[MAX]){
    printf("Die Zeichenkette lautet: %s", x);
}

int main() {

    int eingabe;
    int zahl; 
    int i;
    int j = 0;
    char zeichenkette[MAX];


    do{
      eingabeaufforderung();
      scanf("%d", &eingabe);
    }while(eingabe < 0);

    // Es wird 4 mal eingabeaufforderung ausgeführt

   do{
    eingabeaufforderung_zk();
     scanf("%s", zeichenkette);
   }while(zeichenkette[0] == '\0');


   /*do{
     zeichenkette[i] = getchar();
     eingabeaufforderung_zk();
     i++;
   }while(zeichenkette[i-1] == '\n');*/


 
 /* FICK DICH
   do{
     eingabeaufforderung_zk();
     for(i = 0; i < MAX; i++){
        if(zeichenkette[i] == '\n'){
          i = i + MAX;
        } else {
          zeichenkette[i] = getchar();
          i++;
        }
     }
   }while(zeichenkette[0] == '\0');*/



  printf("\n\n");
  ausgabe_int(eingabe);
  ausgabe_zk(zeichenkette);
  
 

    return 0;
}