#include <cs50.h>  // This library gives us tools like "get_char" to get a single character from the user.
#include <stdio.h> // This library helps us display messages on the screen using "printf".

int main(void) // This is where the program starts running.
{
    // Ask the user a yes-or-no question and store their answer in the variable "c".
    char c = get_char("Do you agree? "); 

    // Check if the user answered 'y' (lowercase) or 'Y' (uppercase).
    if (c == 'y' || c == 'Y') 
    {
        printf("Agreed.\n"); // If they answered 'y' or 'Y', print "Agreed."
    }
    // Otherwise, check if the user answered 'n' (lowercase) or 'N' (uppercase).
    else if (c == 'n' || c == 'N') 
    {
        printf("Not Agreed.\n"); // If they answered 'n' or 'N', print "Not Agreed."
    }
}
