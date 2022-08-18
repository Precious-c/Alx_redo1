/**
 * mul() - takes two inputs and returns the result of their multiplication
 * a: input 1
 * b: input 2
 * Return: result of their multiplication
*/

#include <stdio.h>
#include "main.h"

int mul(int a, int b);

int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return(0);
}
