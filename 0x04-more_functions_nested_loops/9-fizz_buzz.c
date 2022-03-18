#include <stdio.h>

/*
 * main - entry point
 *
 * This program prints numbers from 1 to 100 substituting multiple *
 * of 5 and 3 with words
 *
 * Return: Always (0) - success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz ");
		}
		else
		{
		printf("%d ", i);
		}
	}

	return (0);
}
