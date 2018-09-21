#include "holberton.h"
/**
 * print_diagonal - prints diagonal line
 * return - void
 */
void main(int n)
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
