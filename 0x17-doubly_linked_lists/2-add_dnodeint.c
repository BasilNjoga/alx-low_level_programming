#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - this function adds a node to the beginning of a list
 *
 * @head: pointer to the head of the list
 * @n: integer to be added to linked list
 *
 * Return: nothing
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		temp = *head;
		*head = new_node;
		new_node->next = temp;
	}
	return (new_node);
}

