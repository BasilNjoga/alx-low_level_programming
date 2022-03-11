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

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
	}
	ch = '\n';
	putchar(ch);
	return (0);
}
