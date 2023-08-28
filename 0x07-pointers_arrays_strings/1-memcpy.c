#include "main.h"
#include <stdio.h>

/**
 * _memcpy - occupies a memory
 * @dest: destination memory
 * @src: source memory
 * @n: integer to be stored
 * Return: string occupies from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)

		dest[a] = src[a];

	return (dest);
}
