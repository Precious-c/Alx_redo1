/*
    *Function _isalpha checks is c is an alphabet
    *Returns 1 if c is an alphabet (lowercase or upperase)
*/

#include <stdio.h>
#include "main.h"

int _isalpha(int c);

int main(void)
{
    int r;

    r = _isalpha('H');
    putchar(r + '0');  
    r = _isalpha('o');
    putchar(r + '0');
    r = _isalpha(108);
    putchar(r + '0');
    r = _isalpha(';');
    putchar(r + '0');
    putchar('\n');

    return (0);
}
