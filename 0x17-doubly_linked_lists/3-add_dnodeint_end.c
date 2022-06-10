#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlisting - this function prints all elements of a singly linked list
 *
 * @h: pointer to a list
 *
 * Return: nothing
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *counter;
	counter = head;
    counter->next = head;
    counter->prev = NULL;
	return(&counter);
}

