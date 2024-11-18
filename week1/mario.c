#include <cs50.h>  // This lets us use the get_int function to ask the user for input
#include <stdio.h> // This lets us print things to the screen

int main(void)
{
    int height; // Declare a variable called 'height' where we will store the pyramid's height

    // Ask the user for the height of the pyramid, but make sure it's at least 8
    do
    {
        height = get_int("Height: ");  // Get the height number from the user
    }
    while (height < 8);  // Keep asking until the height is 8 or greater

    // Now that we have a valid height, let's build the pyramid
    for (int row = 1; row <= height; row++) // Loop through each row (1 to the height)
    {
        // Print spaces before the hashes (to center them)
        for (int space = height - row; space > 0; space--)
        {
            printf(" ");  // Print one space for alignment
        }

        // Print hashes for the left part of the pyramid
        for (int left_hash = 1; left_hash <= row; left_hash++)
        {
            printf("#");  // Print one hash for the left side of the pyramid
        }

        // Print a space in the middle between the two sides of the pyramid
        printf(" ");  // Print a space in between the left and right parts of the pyramid

        // Print hashes for the right part of the pyramid
        for (int right_hash = 1; right_hash <= row; right_hash++)
        {
            printf("#");  // Print one hash for the right side of the pyramid
        }

        // After finishing the row, move to the next line
        printf("\n");  // Move to the next row to start printing the next set of spaces and hashes
    }
}
