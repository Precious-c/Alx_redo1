/*
    *Function _islower checks if an alphabet is lowercase
    *Returns 0 if alphabet is lowercase and returns 0 if otherwise
*/

#include <stdio.h>

int _islower(int c);

int main(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');

    return (0);
}
