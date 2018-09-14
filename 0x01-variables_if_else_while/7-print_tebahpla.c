#include <stdio.h>
/**
  * main - entry point
  * Return: always 0 (success)
**/

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);
	putchar('\n');
	return (0);
}