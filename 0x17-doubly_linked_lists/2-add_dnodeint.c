#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - this function adds a node to the beginning of a list
 *
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *counter;
    counter = (dlistint_t *) malloc(sizeof(dlistint_t));
	
    counter->n = n;
    counter->next = *head;
    counter->prev = NULL;
	return(&counter);
}

