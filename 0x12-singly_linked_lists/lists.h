#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

typedef struct list_t
{
	size_t len;
	char *str;
	struct list_t *next;
}list_t;
size_t print_list(const list_t *h);
#endif
