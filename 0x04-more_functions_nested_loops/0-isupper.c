#include "main.h"

/**
 * _isupper - write a function that checks for uppercase character
 * @c: is an integer
 * Return: 1 else 0
*/
int _isupper(int c);
{
	if (c >= A && c <= Z)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
}

