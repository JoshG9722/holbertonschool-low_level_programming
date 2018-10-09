#include <stdio.h>
/**
  * main - entry point
  * Return: always 0(success)
**/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i % 10 + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
