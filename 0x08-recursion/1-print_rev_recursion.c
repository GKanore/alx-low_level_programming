#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse using recursion
  * @s: the string to print
  * Return: nothing
  */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (!s[i])
		return;

	_print_rev_recursion(&s[i + 1]);

	_putchar(s[i]);
}
