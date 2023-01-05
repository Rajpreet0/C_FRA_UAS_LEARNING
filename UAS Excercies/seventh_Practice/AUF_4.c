#include <stdio.h>


int main(){

   float betrag;
   int zwei_euro = 0;
   int ein_euro = 0;
   int fifty_cent = 0;
   int twenty_cent = 0;
   int ten_cent = 0;
   int five_cent = 0;
   int two_cent = 0;
   int one_cent = 0;


    printf("\nWie groß ist der Euro-Betrag, welcher in moeglichst wenig\n Muenzen aufgeteilt wedrden soll?: ");
    scanf("%f", &betrag);

 
    while(betrag >=  2){
        zwei_euro++;
        betrag = betrag  - 2;
    }
    printf("%d x 2-Euro-Muenze\n", zwei_euro);


    while(betrag >= 1){
        ein_euro++;
        betrag = betrag - 1;
    }
    printf("%d x 1-Euro-Muenze\n", ein_euro);

    while(betrag >= 0.5){
        fifty_cent++;
        betrag = betrag - 0.5;
    }
    printf("%d x 0.5-Euro-Muenze\n", fifty_cent);



     while(betrag >=  0.2){
        twenty_cent++;
        betrag = betrag  - 0.2;
    }
    printf("%d x 0.2-Euro-Muenze\n", twenty_cent);


    while(betrag >= 0.1){
        ten_cent++;
        betrag = betrag - 0.1;
    }
    printf("%d x 0.1-Euro-Muenze\n", ten_cent);

    while(betrag >= 0.05){
        five_cent++;
        betrag = betrag - 0.05;
    }
    printf("%d x 0.05-Euro-Muenze\n", five_cent);


      while(betrag >= 0.02){
        two_cent++;
        betrag = betrag - 0.02;
    }
    printf("%d x 0.02-Euro-Muenze\n", two_cent);

    while(betrag > 0.00){
        betrag = betrag - 0.02;
        one_cent++;
    }
    printf("%d x 0.01-Euro-Muenze\n", one_cent);





    return 0;
}