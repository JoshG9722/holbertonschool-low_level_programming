#include "holberton.h"
/**
  * is_prime_number - returns prime number
  * @n: takes int
  * Return: int
  */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (checker_prime(2, n));
}
/**
  * checker_prime - helps find the prime number
  * @i: takes int
  * @n: takes int
  * Return: int
  */
int checker_prime(int i, int j)
{
	if (j == i)
	{
		return (1);
	}
	else if (j % i == 0)
	{
		return (0);
	}
	return (checker_prime(i + 1, j));
}