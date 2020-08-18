// Fun shape I made because was getting bored

#include <stdio.h>

int main(void)
{
    int bricks = 10;
    // for the row
    // The trick is to make two different pyramids and combine them together

    for (int i = 0; i < bricks; i++)
    {
        int space_between = (bricks - 1) - i;
        int hashes = i;

        // Printing spaces so that the pyramid looks from top right to bottom left
        for (int j = 0; j <= space_between; j++)
        {
            printf(" ");
        }

        // Print the hashes after the spaces
        for (int h = 0; h <= hashes; h++)
        {
            printf(".");
        }

        // print the left pyramid

        for (int h = 0; h <= hashes; h++)
        {
            printf(".");
        }

        // New Row
        printf("\n");
    }

    // Making the bottom side of the diamond
    // The logic is reversed
    // Make Two different reverse pyramids and combine them together

    for (int l = 0; l < bricks; l++)
    {
        int spaces = l;
        int hash = (bricks - 1) - l;

        // Printing spaces so that the pyramid looks from top right to bottom left
        for (int m = 0; m <= spaces; m++)
        {
            printf(" ");
        }

        // Print the hashes after the spaces
        for (int o = 0; o <= hash; o++)
        {
            printf(".");
        }

        // print the left pyramid

        for (int o = 0; o <= hash; o++)
        {
            printf(".");
        }
        
        // new line
        printf("\n");        
    }   
}
