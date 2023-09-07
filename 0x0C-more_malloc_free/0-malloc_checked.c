#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - functions that allocates memory using melloc
 * @b: the integer to be allocated
 *
 * Return: A pointer to the allocated memmory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
