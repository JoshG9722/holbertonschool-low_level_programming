#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int i;
	char al;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	for (al = 'a'; al < 'g'; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
