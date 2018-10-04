#include "holberton.h"
/**
  * factorial - returns factorial of given number
  * @n: takes int
  * Return: n 
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
