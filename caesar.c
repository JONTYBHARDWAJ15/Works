#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char**argv)
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    
    for (int i = 0, l = strlen(plaintext); i < l; i++)
    {
        // c = (plaintext[i] -'a' + k) % 26 + 'a'
        if islower(plaintext[i])
        {
            printf("%c", (plaintext[i] -'a' + k) % 26 + 'a');
        }
        // c = (plaintext[i] -'A' + k) % 26 + 'A'
        else if isupper(plaintext[i])
        {
            printf("%c", (plaintext[i] -'A' + k) % 26 + 'A');
        }
        
        else 
        printf("%c", plaintext[i]);
     }
     printf ("\n");
}
