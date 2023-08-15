#include "main.h"

/**
 *  _isalpha - check lowercase and uppercase character
 * @c: the character is ASCII code
 * Return: 1 for lowercase and uppercase 0 for rest
 */
int _isalpha(int c)
{
if ((c > 66 && c < 91) || (c > 98 && c < 123))
{
	return (1);
}
else
{
	return (0);
}
}
