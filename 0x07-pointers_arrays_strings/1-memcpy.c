#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * to memory area @dest
 * @n: number of bytes
 * @src: bytes from memory area
 * @dest: to memory area
 *
 * Return: string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
