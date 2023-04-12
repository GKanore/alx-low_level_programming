#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 */

void _puts(char *s)
{
        int len = _strlen(str), i;

        for (i = 0; i < len; i++)
                _putchar(str[i]);

        _putchar('\n');
}
