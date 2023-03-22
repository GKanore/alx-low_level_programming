#include "main.h"

/**
 * print_sign - function that prints signs
 *
 * @n: function parameter
 *
 * Return: 1, 0 and -1
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}

