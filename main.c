/*
 * In this program we ask the user what time is it.
 * Date: August 27th, 2018
 * Author: Alejandro Ramírez
 * E-mail: alex.ramirez.99@hotmail.com / A01412034@itesm.mx
 */

#include <stdio.h>

int main() {
    // variables
    int hour;

    // user - what time is it?
    printf("Hello user. What time is it?\n");
    scanf("%i", &hour);


        if (hour > -1 && hour < 24);

        else {
            printf("ERROR. Please enter a valid number.");
            return(0);
        }


        if (hour < 12 && hour > 2)
            printf("Good morning! :)\n");

        if (hour >= 12 && hour < 19)
            printf("Good afternoon! Hope you're having a wonderful day.\n");

        if (hour >= 19 && hour < 22)
            printf("Good evening! It's almost time to sleep.\n");


        else {
            printf("Good night! See you tomorrow.");
        }



    return 0;
}
