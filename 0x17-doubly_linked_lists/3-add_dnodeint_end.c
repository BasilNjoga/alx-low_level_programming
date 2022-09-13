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
    dlistint_t *new_node;

    new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
	    return (NULL);
    }
    new_node->n = n;
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        while(*head != NULL)
        {
            *head = (*head)->next;
        }
        (*head)->next = new_node;
        new_node->prev = (*head)->prev;
    }
	return(new_node);
}

