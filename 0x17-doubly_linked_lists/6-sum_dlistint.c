#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    dlistint_t *temp;
    int sum;

    if (head == NULL)
    {
        return (0);
    }
    temp = head;
    sum = 0;
    while (head != NULL)
    {
        sum = sum + head->n;
        head = head->next;
    }

    return (sum);
}