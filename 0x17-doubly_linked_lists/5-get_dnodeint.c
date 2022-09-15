#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: list to be checked
 * @index: index of node to be gotter
 *
 * Return: *dlistint
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	while (head->next != NULL)
	{
		j++;
	}
	if (index > j)
	{
		return (NULL);
	}

	i = 0;
	while (i != index)
	{
		head = head->next;
		i++;
	}
	return (NULL);
}
