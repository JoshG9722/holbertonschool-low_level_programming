#include "holberton.h"
/**
  * print_triangle - prints triangle
  * size: takes int for size of triangle
  return - void
  */
void print_triangle(int size)
{
	int row, column, i;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (i = row + column; i >= 1; i--)
			_putchar('#');
		_putchar('\n');
	}
}
