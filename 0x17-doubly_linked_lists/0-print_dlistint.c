#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlisting - this function prints all elements of a singly linked list
 *
 * @h: pointer to a list
 *
 * Return: nothing *
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *counter;
	size_t i = 0;
	counter = h;

	while(counter != NULL)
	{
		i++;
		counter = counter->next;
        printf("%d",counter->n);
	}
	return(i);
}