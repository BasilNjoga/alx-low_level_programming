#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a created node at an index
 * 
 * @h: pointer to the head of the list
 * @idx: index of the list to be added
 * @n: integer value of node
 *  
 * @Return: dlistint_t* 
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i;
    dlistint_t *temp;
    dlistint_t *new_node;

    new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
    if (new_node == NULL) 
    {
        return (NULL);
    }
    new_node->n = n;
    i = 1;
    temp = *h;
    while (i != idx)
    {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next = new_node;
    new_node->next->prev = new_node;
    
    return (new_node);

}