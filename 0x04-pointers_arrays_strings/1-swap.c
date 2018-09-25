#include "holberton.h"
/**
 * swap_int - switching the values of two integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}