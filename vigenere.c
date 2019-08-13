#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    
    string k = argv[1];
    int lenk = strlen(k);
    for (int i = 0; i < lenk; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("Invalid Key\n");
            return 1;
        }
    }
    
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    
    for (int i = 0,index = 0,  l = strlen(plaintext); i < l; i++)
    {
        if (isalpha(plaintext[i]))
        {
           // c = (plaintext[i] -'a' + k) % 26 + 'a'
           if islower(plaintext[i])
           {
               printf("%c", (plaintext[i] - 'a' + toupper(k[index]) - 'A') % 26 + 'a');
            
           }
           // c = (plaintext[i] -'A' + k) % 26 + 'A'
           else if isupper(plaintext[i])
           {
               printf("%c", (plaintext[i] - 'A' + toupper(k[index]) - 'A') % 26 + 'A');
           }
           index = (index + 1) % lenk; 
        }  
        
        else 
           {
               printf("%c", plaintext[i]);
           }    
        
    }
    printf("\n");
}
