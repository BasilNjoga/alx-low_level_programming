#include <stdio.h>

/**
 * main - entry point
 *
 * This function prints all the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	ch = '\n';
	putchar(ch);
	return (0);
}
