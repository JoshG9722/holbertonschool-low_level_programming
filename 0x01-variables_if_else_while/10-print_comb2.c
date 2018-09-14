#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int n;

	i = 0;
	while (i <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			putchar('0' + i);
			putchar('0' + n);
			if (i != 9 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}