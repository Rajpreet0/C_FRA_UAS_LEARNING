#include <stdio.h>

int main(){
 
   // Ergebnis 2/4

    char x[] = "234\0";
    x[1] = x[1] * x[2] + x[3];
    printf("%s\n", x);

 
    // Ergebnis 2f4
    char y[] = "234\012";
    y[1] = y[1] * y[2] + y[3];
    printf("%s\n", y);

    return 0;
}