#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    // Get user's input
    string text = get_string("Input: ");
    // Interate through each character in the string
    for (int i = 0; i < strlen(text); i++)
    {
        printf("%c - %i\n", text [i], text [i]);
    }
       //Check if it is alphabetic
           //If so, convert to uppercase

     // Print out yes or no
}