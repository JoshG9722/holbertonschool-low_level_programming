#include "holberton.h"
/**
 * print_diagonal - printing diagonal line
 * returns:void 
 */
void print_diagonal(int n)
{
	char i;
	char j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
				_putchar(' ');
				}
			}
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
