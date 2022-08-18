/**
	*_isalpha - checks if c is an alphabet
	*@c: A character input
	*Return: 1 if c is an alphabet (lowercase or uppercase) and 0 if otherwise
*/

#include "main.h"

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
