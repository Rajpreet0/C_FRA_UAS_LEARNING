#include <stdio.h>

// The memory size (in bytes) of a data type or a variable can be found with the sizeof operator

int main() {

    /* -------- SIZEOF OPERATOR -------- */
 
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

     
    // %lu = long unsigned int
    // format specifer to print the result instead of "%d", it is because the compiler expects the sizeof operator
    
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;
}