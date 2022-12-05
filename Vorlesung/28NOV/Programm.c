#include <stdio.h>

int main(){
    
    char i;
    char zahl[10];
    char temp;
    int eingabe;
   // char temp;
    for(i=0; i<10; i++) {
        printf("Bitte gebe die %d. Zahl ein: ", i+1); // Oder das Zeichen
        scanf("%c", /*&zahl[i]*/&eingabe);
        scanf("%c", &temp);
        
        temp = (char)eingabe;
        zahl[i] = temp;
    }
    for(i=0; i<10; i++){
        printf("Die %d. Zeichen war %c oder als Zahl %d\n", i+1, zahl[i], zahl[i]);
    }

    // 65 = A..., wegen der ASCII Tabelle wird Binär umgeformt 
   
    zahl[10] = '\0'; //Oder einfach nur 0 -> '\0' ist ein Terminator Zeichen (null)
    printf("Die Zeichenkette lautet %s\n", zahl); // %s ist ein String => also keine For-Schleife nötig
                                                  // Eine Zeichenkette ist dann zuende, wenn ein 0 kommt



     char wort[11];  // Der Benutzer kann nur 10 Zeichen (11 = 0, welches das Programm beendet) eingeben 
     printf("Bitte gebe eine Zeichenkette ein: ");
     scanf("%s", wort);
     printf("Das Wort ist %s.\n", wort);

    return 0;
}