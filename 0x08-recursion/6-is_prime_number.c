#include "main.h"
/**
 * find - find the prime number of an integer
 * @a: integer 1
 * @b: integer 2
 *
 * Return: return 1 for primenunber or 0
 */
int find(int a, int b)
{
	if (a <  2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (find(a + 1, b));
}

/**
 * is_prime_number - The prime number of an integer
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (find(2, n));
}
