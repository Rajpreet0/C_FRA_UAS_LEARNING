#include <stdio.h>

// A)
void eingabeaufforderung_info(){
    printf("Es ist nun einen Benutzereingabe erforderlich\n");
}

// B)  
void eingabeaufforderung_zk(){
    printf("Bitte geben Sie eine Zeichenkette ein: \n");
}

// C)
int eingabeaufforderung_int(int y){
    printf("Bitte geben Sie eine ganze Zahl ein: ");
    scanf("%d", &y);
    return y;
}

int main(){

    int zahl;

    eingabeaufforderung_info();
    eingabeaufforderung_zk();
    eingabeaufforderung_info();
    eingabeaufforderung_int(zahl);

    return 0;
}