#include <stdio.h>

int print_last_digit(int);

int main (void)
{
    int r;
    
    print_last_digit(98);
    putchar('0' + r);
    print_last_digit(0);
    putchar('0' + r);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');

    return(0);
}

int print_last_digit(int n)
{
    int last_digit = n % 10;
    return(last_digit);
}
