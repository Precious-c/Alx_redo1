/**
 * _isdigit - is a functions that checks if an input is a digit(0-9).
 * c: takes and input
 * Return: 1 if input is a digit(0-9) otherwise, it returns 0
*/

#include<stdio.h>
#include "main.h"

int _isdigit(int c);

int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));

    return (0);
}
