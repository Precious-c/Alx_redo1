/*
    * Function "print_alphabet_x10" prints alphabets in lowercase 10 times
    * returns 0
*/ 

#include "main.h"

/*void print_alphabet_x10(void);

int main()
{
    print_alphabet_x10();

    return 0;
}
*/
void print_alphabet_x10(void)
{
    int i;
    int j;

    //Loop for 10 lines
    for (j = 1; j < 11; j++)
    {
        //print alphabets
        for (i = 'a'; i <= 'z'; i++)
        {
           _putchar(i);
        }
       _putchar('\n');
    }

}
