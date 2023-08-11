#include<stdio.h>
#include<stdio.lib>
#include<time.h>

/**
 * main - print the last digit of the randoms
 * numbers stored in the variable
 * Return : 0 Alway (Success)s
 */
int main(void)

{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2
printf("%d Last digit is %d", n % 10);
if (n % 10 > 5)
printf("and is greater than 5\n");
else if (n % 10 < 5)
printf("and is less than 5\n");
else if (n % 10 == 0)
printf("and is 0\n");
else if (n % 10 < 6 && n % 10 != 0)
printf("and is less than 6 not 0\n");
return (0);
}
