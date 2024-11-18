#include <cs50.h>  // This library gives us tools like "get_int" to get numbers from the user.
#include <stdio.h> // This library helps us display messages on the screen using "printf".

int main(void) // This is where the program starts running.
{
    // Ask the user for a number and store it in the variable "x".
    int x = get_int("What is X: "); 

    // Ask the user for another number and store it in the variable "y".
    int y = get_int("What is Y: "); 

    // Compare the two numbers entered by the user.
    if (x < y) // Check if x is smaller than y.
    {
        printf("X is less than Y.\n"); // If true, print this message.
    }
    else if (x > y) // Check if x is greater than y.
    {
        printf("X is greater than Y.\n"); // If true, print this message.
    }
    else // If neither of the above is true, it means x is equal to y.
    {
        printf("X is equal to Y.\n"); // Print this message when x and y are the same.
    }
}
