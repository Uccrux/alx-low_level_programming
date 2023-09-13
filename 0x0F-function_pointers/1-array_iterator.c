#include "function_pointer.h"

/**
 * array_iterator - a function give as a
 * parameter on each element of array
 *
 * @array: array to execute func on
 * @size: is the size of the array
 * @action: is the pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
