#include "main.h"

/**
 * _islower - show 1 if the input is lowercasecharacter,Another case show 0r
 *
 * @c: the character is ASCII code
 * Return: 1 for lowercase character 0 for rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
