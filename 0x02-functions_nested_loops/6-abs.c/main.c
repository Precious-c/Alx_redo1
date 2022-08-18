/**
 * _abs - computes the absolute value of an integer
 * @a - integer parameter
 * Return: always 0
*/

#include <stdio.h>

int _abs(int);

int main(void)
{
    int r;
    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);

}
