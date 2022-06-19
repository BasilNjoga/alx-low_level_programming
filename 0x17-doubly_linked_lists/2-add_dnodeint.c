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
    dlistint_t *new_node;

    new_node = (dlistint_t *) malloc(sizeof(dlistint_t));	
    new_node->n = n;
    new_node->next = *head->next;
    head = new_node;    
	return(&new_node);
}

