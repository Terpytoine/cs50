#include <cs50.h>  // This library provides tools for getting input from the user (not used here but included).
#include <stdio.h> // This library helps us display messages on the screen with "printf".

// Declaring the "meow" function so we can use it in the program before fully writing it.
void meow(int n);

int main(void) // This is where our program starts running.
{
    {
        meow(10); // Call the "meow" function to print "Meow!" 10 times.
    }
}

// This is the "meow" function, which prints "Meow!" as many times as we ask it to.
void meow(int n) 
{
    // A loop to repeat the action (printing "Meow!") n times.
    for (int i = 0; i < n; i++) 
    {
        printf("Meow! \n"); // Print "Meow!" followed by a new line.
    }
}
