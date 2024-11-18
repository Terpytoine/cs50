#include <cs50.h>  // This lets us use the get_int function to ask the user for input
#include <stdio.h> // This lets us print things to the screen

int main(void)
{
    // Ask the user for the height of the pyramid and save it in 'height'
    int height = get_int("Height: ");

    // This loop goes through each row (from 1 to the height the user gave)
    for (int row = 1; row <= height; row++)
    {
        // This loop prints spaces before the first block of hashes.
        // The number of spaces gets smaller as we go down the rows.
        for (int space = height - row; space > 0; space--)
        {
            printf(" ");  // Print a space
        }

        // This loop prints the hashes for the left side of the pyramid.
        // The number of hashes increases as we go down the rows.
        for (int left_hash = 1; left_hash <= row; left_hash++)
        {
            printf("#");  // Print a hash
        }

        // Print one space in between the two parts of the pyramid.
        printf(" ");  // Print a space

        // This loop prints the hashes for the right side of the pyramid.
        // It is the same number as the left side.
        for (int right_hash = 1; right_hash <= row; right_hash++)
        {
            printf("#");  // Print a hash
        }

        // Move to the next line after printing spaces and hashes for this row.
        printf("\n");  // Go to the next row
    }
}
