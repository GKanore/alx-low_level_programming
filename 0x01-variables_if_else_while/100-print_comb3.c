#include <stdio.h>

/**
 * main - main function
 *
 * description - print all possible combos no repeats
 *
 * Return: always 0
 **/

int main(void)
{
	int tens = 0;

	for (; tens <= 9; tens++)
	{
		int ones = 0;

		for (; ones <= 9; ones++)
		{
			if (tens != ones)
			{
				int small = 10 * tens + ones;
				int big = 10 * ones + tens;

				if (small < big)
				{
					putchar('0' + tens);
					putchar('0' + ones);
					if (tens != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

