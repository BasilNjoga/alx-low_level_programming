#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - this function adds a node to the end of a list
 *
 * @h: pointer to a list
 *
 * Return: nothing
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *counter;
	counter = head;

    while (counter->next != NULL)
    {
        counter = counter->next;
    }
    counter->next = (dlistint_t *) malloc(sizeof(dlistint_t));
    counter->next->n = n;
    counter->next->next = NULL;
	return(&counter);
}

