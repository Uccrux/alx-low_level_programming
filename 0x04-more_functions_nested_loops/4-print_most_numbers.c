#include "main.h"
/**
 * print_most_numbers - wrire a function that prints the number,from 0 to 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar('\n');
}
