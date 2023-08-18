#include <stdio>
#include " main.h"
/**
 * main - prints the number from 1 to 10
 * follwed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 0)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	printf('\n');
	return (0);
}
