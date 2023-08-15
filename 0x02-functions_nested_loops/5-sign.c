#include "main.h"

/**
 * print_sign - sign of number
 * @n: n is an integer
 * Return: 1+ , 0 , -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n ==0)
	{
		_putchar(0);
			return (0);
	}
	else if (n < 0)
	{
		_putchar(-)
			return (-1)
	}
}
