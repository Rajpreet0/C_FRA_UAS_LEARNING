#include <stdio.h>

 /* \n = escape sequence and its forces the cursor to change its position to the beginning of the next line */

int main() {


  /* -------- ALL \n Operations are listed here -------- */


  /* To insert a new line, you can use \n character */
   printf("Hello World!\n");
   printf("I am learning C.");

   printf("\n\n");

    /* You can also output multiple lines with a single printf() funciton */
    printf("Hello World!\nI am learing C. \nAnd it is awesome!");

    printf("\n\n");

    /* Two \n characters after each other will create a blank line */
    printf("Hello World!\n\n");
    printf("I am learning C.");

    printf("\n\n");


    /* -------- Other NEW LINE Operations starts here  -------- */


    /* \t = Creates a horizontal tab */
    printf("Hello World!\t");
    printf("I am learning C.");

    printf("\n\n");

    /* \\ = Inserts a backslash character (\) */
    printf("Hello World!\\");
    printf("I am learning C.");

    printf("\n\n");

    /* \" = Inserts a double quote character */
    printf("Hello World!\"");
    printf("I am learning C.");

    return 0;
}