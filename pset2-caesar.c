#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        int k = atoi(argv[1]);
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        // plaintext to ciphertext 
        for (int i = 0; i < strlen(plaintext); i++)
        {
            // converts all lowercase
            if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                printf("%c", ((((plaintext[i] - 'a') + k) % 26) + 'a'));
            }
            // converts all uppercase
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                printf("%c", ((((plaintext[i] - 'A') + k) % 26) + 'A'));
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
