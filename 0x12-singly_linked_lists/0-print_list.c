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
	while (h->next != null)
	{
	printf("%s", h->str);
	printf("%d", h->len);
	h = &h->next;
	}

	return (0);
	
}
