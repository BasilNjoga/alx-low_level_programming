#include <stdio.h>

/**
 * main - entry point
 *
 * This function prints all the numbers between one and ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0 ; ch < 10; ch++)
	{
		putchar(ch);
	}
	ch = '\n';
	putchar(ch);
	return (0);
}
