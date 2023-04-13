#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */


void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL) {
        exit(98);
    }

    return ptr;
}
