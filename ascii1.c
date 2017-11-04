#include <stdio.h>

int main(void)
{
    // iterate from A -Z
    for(char c = 'A'; c <= 'Z'; c++)
    {
        // printing out c and integral equivalent
        printf("%c is %i\n", c, (int) c);
    }
}