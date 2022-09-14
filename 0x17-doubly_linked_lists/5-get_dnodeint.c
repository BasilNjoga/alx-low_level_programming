#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: list to be checked
 * @index: index of node to be gotter
 * 
 * @Return: dlistint_t* 
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *temp;
    unsigned int i;

    i = 0;
    while (i != index)
    {
        head = head->next;
        i++
    }
    return head;
}