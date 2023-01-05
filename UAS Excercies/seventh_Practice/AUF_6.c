#include <stdio.h>

#define N 10 // Anzahl der Zahlen

// Funktion zum Einlesen der Zahlen
void readNumbers(int numbers[N])
{
  printf("Bitte %d Zahlen eingeben:\n", N);

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &numbers[i]);
  }
}

// Funktion zur Berechnung von Minimum, Maximum und Durchschnitt
void calcMinMaxAvg(int numbers[N], int *min, int *max, int *avg)
{
  *min = numbers[0];
  *max = numbers[0];
  *avg = 0;

  for (int i = 0; i < N; i++)
  {
    if (numbers[i] < *min)
    {
      *min = numbers[i];
    }

    if (numbers[i] > *max)
    {
      *max = numbers[i];
    }

    *avg += numbers[i];
  }

  *avg /= N;
}

// Funktion zum Ausgeben der Ergebnisse
void printResults(int numbers[N], int min, int max, int avg)
{
  printf("Eingelesene Zahlen: ");
  for (int i = 0; i < N; i++)
  {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);
  printf("Durchschnitt: %d\n", avg);
}

int main()
{
  int numbers[N]; // Array für die Zahlen
  int min, max, avg; // Variablen für Minimum, Maximum und Durchschnitt

  // Einlesen der Zahlen
  readNumbers(numbers);

  // Berechnung von Minimum, Maximum und Durchschnitt
  calcMinMaxAvg(numbers ,&min, &max, &avg);

  printf("Test:  %d %d %d", min, max, avg);
   
   return 0;
}

