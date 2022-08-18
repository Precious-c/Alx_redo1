/**
 * _abs - computes the absolute value of an integer
 * @a: integer parameter
 * Return: always 0
*/

#include "main.h"

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else if (a < 0)
	{
		int b = 0 - a;
	return (b);
	}
}
