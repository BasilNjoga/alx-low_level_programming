#include <stdio.h>

/**
 * print_dlistint - prints all elements of a list
 * 
 * @h: double linked list 
 * 
 * Return: nothing
 */

size_t print_dlistint(const dlistint_t *h)
{   size_t i = 0;
    dlistint_t counter;
    counter = head; 

    while(counter != NULL)
    {
        i++;
        counter = counter->next; 
    }

    return(i);
}