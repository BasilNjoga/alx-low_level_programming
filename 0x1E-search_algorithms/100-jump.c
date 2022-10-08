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
    size_t n, q;
    size_t l, i;

    q = floor(sqrt(size));
    l = 0;
    n = 0;
    while (array[n] < value)
    {
        printf("Value checked array[%d] = [%d]\n", n, n);
        l = n;
        n = n + q;
        if (l >= size)
        {
            return (-1);
        }
    }
    printf("Value found between indexes [%d] and [%d]\n", l, n);
    for (i = l; i <= n; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    if (array[n] == value)
    {
        return (n);
    }
    return (-1);
}