#include <stdio.h>
#include <unistd.h>
#include <main.h>

/**
 * main - Entry point
 *
 * This program outputs a word from using an external function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nl;
	int ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (int i = 0; i <= sizeof(ch); i++)
	{
	putchar(ch[i]);
	}
	nl = '\n';
	putchar(nl);

	return (0);
}
