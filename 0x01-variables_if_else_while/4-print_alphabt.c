#include<stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a'
		while (ch <= 'Z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			ch++;
		}
	putchar('\n');
	return (0);
