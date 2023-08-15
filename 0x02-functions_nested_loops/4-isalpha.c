#include "main.h"

/**
 *  _isalpha - check lowercase and uppercase character
 * @c: the character is ASCII code
 * Return: 1 for lowercase and uppercase 0 for rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && <= 91))
	{
		return (1);
	}
			else
			{
				return (0);
			}
	}
