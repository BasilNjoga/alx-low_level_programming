#include "lists.h"

/**
 * print_dlistint - this function prints all elements of a singly linked list
 *
 * @h: pointer to a list
 *
 * Return: nothing *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *counter;
	size_t i = 0;
	counter = h;

	while(counter != NULL)
	{
		i++;
		printf("%d\n",counter->n);
		counter = counter->next;
	}
	return(i);
}
