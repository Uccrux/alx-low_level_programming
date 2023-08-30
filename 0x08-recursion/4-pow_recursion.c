#include "main.h"
/**
 * _pow_recursion - This function that returns the value of an integer
 * @y: integer 1
 * @x: integer 2
 *
 * Return: the value of an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
