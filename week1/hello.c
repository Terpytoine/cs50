#include <cs50.h>  // This library gives us tools like "get_string" to get text input from the user.
#include <stdio.h> // This library helps us display text using "printf".

int main(void) // This is where the program starts running.
{
    // Ask the user for their first name and store it in the variable "name".
    string name = get_string("What's your name? \n");

    // Ask the user for their last name and store it in the variable "last".
    string last = get_string("What is your last name? \n");

    // Print a greeting that includes both the first name and last name.
    // "%s" is a placeholder for strings (like the name and last name), and they are replaced with "name" and "last".
    printf("Hello, %s %s \n", name, last);
}
