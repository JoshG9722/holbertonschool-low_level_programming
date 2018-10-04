#include "holberton.h"
int checker_prime(int, int);
/**
  * is_prime_number - returns prime number
  * @n: int
  * Return: int
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (checker_prime(2, n));
}

/**
  * checker_prime - helps find the prime number
  * @i: int
  * @j: int
  * Return: int
  */
int checker_prime(int i, int j)
{
	if (i == j)
		return (1);
	if (j % i == 0)
		return (0);
	return (checker_prime(i + 1, j));
}
