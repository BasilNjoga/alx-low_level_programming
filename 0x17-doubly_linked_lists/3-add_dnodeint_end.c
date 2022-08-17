#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - this function adds a node to the end of a list
 *
 * @h: pointer to a list
 *
 * Return: nothing
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *counter;
    dlistint_t *new_node;

    new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
    new_node->next , new_node->prev = 0;
    new_node->n = n;
	new_node = *head;
    if (*head == 0)
    {
        *head = new_node;
    }
    else
    {
        while(counter != NULL)
        {
            counter = counter->next;
        }
        counter->prev->next = new_node;
        new_node->prev = counter->prev;
    }
	return(new_node);
}

