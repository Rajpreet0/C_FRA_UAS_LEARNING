#include <stdio.h>


/*  AUFGABE NR.2
*
* (1) Die Benutzereingaben sollen jeweils mit passenden Eingabeaufforderungen erfolgen.
*
* (2) Die Ausgabe soll ebenfalls mit passendem Kommentar erfolgen.
*
* (3) Lagern Sie möglichst viel redundanten Quelltext in Funktionen aus. Überlegen Sie
*     sich jeweils, welche Parameter und welche Rückgabewerte sinnvoll sind.
* 
* VORGABEN: 
    
    -> Es gibt eine Funktion zum Einlesen einer einzigen Zahl. Die eingelesene Zahl
       wird als Rückgabewert zurückgeliefert.
    
    -> Es gibt eine Funktion zum Einlesen zweier ganzer Zahlen, 
       welche die Funktion zum Einlesen einer einzigen Zahl aufruft.

    -> Es gibt eine Funktion zur Ausgabe zweier Zahlen.

    -> Es gibt eine Funktion zur Berechnung der Summe zweier Zahlen.

    -> Es gibt eine Funktion zur Ausgabe der Summe zweier Zahlen.
*/



// Funktion zum Einlesen einer einzigen Zahl
int read_single_number()
{
    int number;
    scanf("%d", &number);
    return number;
}

// Funktion zum Einlesen zweier Zahlen
int read_two_numbers()
{
    int number1 = read_single_number();
    int number2 = read_single_number();
    return number1 + number2;
}

// Funktion zur Ausgabe zweier Zahlen
void print_two_numbers(int number1, int number2)
{
    printf("Die erste Zahl lautet: %d", number1);
    printf("Die zweite Zahl lautet: %d", number2);
}

// Funktion zur Berechnung der Summe zweier Zahlen
int sum(int number1, int number2)
{
    return number1 + number2;
}

// Funktion zur Ausgabe der Summe zweier Zahlen
void print_sum(int number1, int number2)
{
    printf("Die Summe der beiden Zahlen lautet: %d", sum(number1, number2));
}

// Hauptprogramm
int main()
{
    // Einlesen der beiden Zahlen
    int number1, number2;
    number1, number2 = read_two_numbers();

    // Ausgabe der beiden Zahlen
    print_two_numbers(number1, number2);

    // Ausgabe der Summe der beiden Zahlen
    print_sum(number1, number2);

    return 0;
}