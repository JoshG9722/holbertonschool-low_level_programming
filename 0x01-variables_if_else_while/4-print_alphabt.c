#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0 (Success)
**/
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
			putchar(al);
	}
	putchar('\n');
	return (0);
}
