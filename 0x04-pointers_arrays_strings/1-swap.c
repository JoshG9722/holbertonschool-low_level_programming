#include "holberton.h"
/**
  * swap_int - swaps the value of two ints
  * @a: takes first int
  * @b: takes second int
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
