#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - this function adds a node to the end of a list
 *
 * @head: pointer to a list
 *
 * @n: integer to be added
 *
 * Return: nothing
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	temp = *head;
	if (temp == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->next = NULL;
		new_node->prev = temp;
	}
	return (new_node);
}

