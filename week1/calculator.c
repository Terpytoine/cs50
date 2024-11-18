#include <cs50.h>  // This gives us tools like "get_int" to easily get numbers from the user.
#include <stdio.h> // This helps us show messages on the screen using "printf".

// Declaring the add function so we can use it in the program before it is fully written.
int add(int a, int b);

int main(void) // This is where our program starts running.
{
    // Ask the user to type a number and save it in the variable x.
    int x = get_int("X: "); 

    // Ask the user to type another number and save it in the variable y.
    int y = get_int("Y: "); 

    // Call the add function with x and y, and show the result on the screen.
    printf("EQUALS: %i \n", add(x, y)); // The "%i" is a placeholder for the sum of x and y.
}

// This is the add function, where we explain how to add two numbers.
int add(int a, int b)
{
    return a + b; // Take the numbers "a" and "b", add them, and send the result back.
}
