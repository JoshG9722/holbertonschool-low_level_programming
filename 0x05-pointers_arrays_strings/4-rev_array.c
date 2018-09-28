#include "holberton.h"
/**
  * reverse_array - reverses array of ints
  * @a: takes array
  * @n: takes int
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < n / 2; j--, i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}