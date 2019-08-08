#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // condition for accepting Change value
    float dollar;
    do 
    {
        dollar = get_float("Change Owed: ");
    }
    while (dollar < 0);
    
    // declaring cents and its conversion from dollars
    int cents = round(dollar * 100);
    
    //setting coin counter
    int coins = 0;
    
    // loops for greedy algorithms 
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }
    // print command for telling no of coins
    printf("%i\n", coins);
}

