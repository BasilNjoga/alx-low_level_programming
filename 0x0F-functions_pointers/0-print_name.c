#include "main.h"
#include <stdio.h>

/**
 * print_name - prints name
 *
 * @name: name to be printed
 * @f: pointer to a function taking char and returning nothing
 *
 * Return: nohting
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
