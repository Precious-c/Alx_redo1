/*
    *Function _islower checks if an alphabet is lowercase
    *Returns 0 if alphabet is lowercase and returns 0 if otherwise
*/

#include "main.h"

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    return 1;
    else
    return 0;
}
