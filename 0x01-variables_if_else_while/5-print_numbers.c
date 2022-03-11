#include <stdio.h>

/**
 * main - entry point
 *
 * This function prints all the numbers between 1 and 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
