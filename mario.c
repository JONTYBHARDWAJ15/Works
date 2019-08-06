#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declaring Variables
    int height, space , hash;
    
    // Condition for Accepting of Value
    do
    {
       printf("Height:");
       height = get_int(0); 
    }
     while (height < 1 || height > 8);
    
    // loop for row
    for (int i = 0; i < height; i++)
    {
       // loop for space
        for (space = (height - i); space >0; space--)
        {
            printf(" ");
        }
         // loop for hash
        for (hash = 0; hash < (i + 1); hash++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
}
