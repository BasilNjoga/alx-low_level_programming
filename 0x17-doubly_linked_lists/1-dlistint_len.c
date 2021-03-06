#include "lists.h"

/**
 * dlistint_len - this function prints all elements of a singly linked list
 *
 * @h: pointer to a list
 *
 * Return: nothing
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *counter;
	size_t i = 0;

	counter = h;
	while (counter != NULL)
	{
		i++;
		counter = counter->next;
	}
	return (i);
}

