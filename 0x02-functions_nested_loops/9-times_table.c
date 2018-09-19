
#include "holberton.h"
/**
 * times_table - entry point
 * @void
 */
void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(' ');
			}
			n = i * j;
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');
			}
			if (j != 9)
				_putchar(',')
