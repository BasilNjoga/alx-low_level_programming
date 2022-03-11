#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * This program assigns a randmom number to n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int new;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	new = n % 10;
	if (new > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, new);
	}
	else if (new == 0)
	{
		printf("Last digit of %d 0 and is 0\n", n);
	}
	else
		printf("Last digit pf %d is %d and is less than 6 and not 0\n", n, new);

	return (0);
}
