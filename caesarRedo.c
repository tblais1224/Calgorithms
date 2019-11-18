#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int key = 0;
    if (argv[1] > 0)
    {
        key = atoi(argv[1]);
    }
    else
    {
        return 1;
    }

    string plainText = get_string("Please enter a string to be encrypted: ");
    string output = "";
    // ascii: 97 to 122
    // ascii: 65 to 90
    for (int i = 0; i < strlen(plainText); i++)
    {
        int asciiChar = plainText[i];
        if (asciiChar < 'A' + 26)
        {
            if (asciiChar + key > 'A' + 26)
            {
                char c = 'A' + (asciiChar + key) % ('A' + 26);
                output += c;
            }
            else
            {
                char c = asciiChar + key;
                output += c;
            }
        }
        else
        {
            if (asciiChar + key > 'a' + 26)
            {
                char c = 'a' + (asciiChar + key) % ('a' + 26);
                output += c;
            }
            else
            {
                char c = asciiChar + key;
                output += c;
            }
        }
    }

    printf("%s\n", output);
    return 0;
}