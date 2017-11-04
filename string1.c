#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get user input in the form of a string
    string s = get_string();

    // make sure that get_string returns a string
    if(s != NULL)
    {
        // iterate through the characters in the string one at a time
        for(int i = 0, n = strlen(s); i < n; i++) //improved on design by storing the string length in the variable of n
        {
            printf("%c\n", s[i]); // print each letter(i'th character of s) of the string on a new line
        }
    }
}