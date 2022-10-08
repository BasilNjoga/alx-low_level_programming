#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - it searches an array using jump
 * 
 * @array: pointer to the first element of an array
 * @size: size of the array 
 * @value: value to be searched for
 * Return: int 
 */
int jump_search(int *array, size_t size, int value)
{
    size_t n;
    size_t l, i;

    n = floor(sqrt(size));
    l = 0;
    while (array[n] < value)
    {
        l = n;
        n = n + n;
        if (n < size)
        {
            return (-1);
        }
    }
    for (i = l; i <= n; i++)
    {
        if (array[n] == value)
        {
            return (n);
        }
    }
    if (array[n] == value)
    {
        return (n);
    }
    return (-1);
}