#include <stdio.h>

int main() {
  
    // Defining the variables in on DataTyp

    int anzahlApfel = 12, anzahlRadio = 2;
    
    double preisApfel = 1.45, preisRadio = 109.95;

    // By giving an Number behind the % and than an the syntax operator a Table can be created
    printf("Anzahl\n");
    printf("%6d\n", anzahlApfel);
    printf("%6d\n", anzahlRadio);

    // By typing 8.2 it will be in row 8 and line 2 
    printf("\n Preis\n");
    printf("%8.2f Euro\n", preisApfel);
    printf("%8.2f Euro\n", preisRadio);
    


    return 0;
}