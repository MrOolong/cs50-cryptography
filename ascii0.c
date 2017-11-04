#include <stdio.h>

int main(void)
{
    // iterate from 65 onward for 26 letters of the alphabet
    for(int i = 65; i < 65 + 26; i++)
    {
        // printing out each iteration of each character's integral equivalent
        printf("%c is %i\n", (char) i, i);
    }
}