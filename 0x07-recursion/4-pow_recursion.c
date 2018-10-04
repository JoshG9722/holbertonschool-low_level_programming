#include "holberton.h"
/**
  * _pow_recursion - returns value x raised to the power y
  * @x: takes int
  * @y: takes int
  * Return: int
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}