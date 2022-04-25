#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a list of things in a string
 *
 * @h: list to be printed
 *
 * Return: Always (0)
 */

size_t print_list(const list_t *h)
{
	list_t trav;
	
	if (h->str == NULL)
	{
	printf("0");
	}
	trav = h;
	while (trav != null)
	{
	printf("%s", trav->str);
	printf("%d", trav->len);
	trav = h->next;
	}

	return (0);
	
}
