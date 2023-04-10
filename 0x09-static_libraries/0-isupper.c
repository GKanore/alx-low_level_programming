#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if value is uppercase
 * @c: value to be checked
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
