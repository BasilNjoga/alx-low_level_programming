#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlisting - this function prints all elements of a singly linked list
 *
 * @h: pointer to a list
 *
 * Return: nothing *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *counter;
	size_t i = 0;
	counter = h;

	while(counter != NULL)
	{
		i++;
		counter = counter->next;
	}
	return(i);
}
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}