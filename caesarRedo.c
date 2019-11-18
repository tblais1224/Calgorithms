#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int key = 0;
    if(argv[1]>0)
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
    for (int i = 0; i < plainText.strlen; i++)
    {
        int asciiChar = plainText[i]
        if (asciiChar < 91)
        {
            
        }
        
    }
    
    printf("%s\n", output);
    return 0;
}