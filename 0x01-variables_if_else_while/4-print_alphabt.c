#include <stdio.h>

/**
  * main - print a-z sans q,e
  * Return: 0
  */
int main(void)
{
	char small;

	for (small = 'a' ; small <= 'z' ; small++)
		if (small != 'q' && small != 'e')
			putchar(small);
	putchar('\n');
	return (0);
}
