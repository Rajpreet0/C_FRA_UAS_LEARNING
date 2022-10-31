#include <stdio.h>

int main() {
 
    /* Dekleration der Variabeln mit Initialisierung */
    // int is a List consiting of 3 Numbers [same with the double]
    int anzahlFeld[3] = {2,7,3};
    double preisEinzelFeld[3] = {1.45, 0.85, 0.75};
    // Needed for the Calculation
    int index;
    double preisGesamt;

    /* CALCULATION */
    printf("Posten Anzahl einzeln Preis Preis gesamt\n");
    /* for Schleife  
     * 
     *  index which is an Integer will be assigned to 0
     *  The index must be under 3 because in the List there are only three values
     *  index++ because for each loop through the for loop the index Integer will be assigned to +1
     *  Till the value of 3 is reached then it won't execute the loop
     * 
    */
    for(index = 0; index < 3; index++) {
        // Do the Multiplikation of all values inside anzahlFeld and all values inside preisEinzelFeld 
        // The result will be store in a double
        preisGesamt = anzahlFeld[index] * preisEinzelFeld[index];
        // After that print a table with all values listed
        // index+1 = the Counting of the Table 1 = FirstRow, 2 = Secondrow, ..., n = N-rows
        printf("%6d %7d %9.2f Euro %8.2f Euro\n", index+1, anzahlFeld[index], preisEinzelFeld[index], preisGesamt);   
    }


    return 0;
}