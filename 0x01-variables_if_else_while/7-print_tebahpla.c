#include <stdio.h>

/**
 * main - entry point
 *
 * This function prints all the letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	ch = '\n';
	putchar(ch);
	return (0);
}
