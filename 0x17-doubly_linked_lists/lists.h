#ifndef _LISTS_H_
#define _LISTS_H_

typedef struct dlistint_t
{
   struct dlistint_t *next;
   struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h); 

#endif
