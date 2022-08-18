/**
 * _isdigit - checks if an input is a digit(0-9).
 * c: takes and input
 * Return: 1 if input is a digit(0-9) otherwise, it returns 0
*/

#include "main.h"

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return(1);
    else
        return(0);
}
