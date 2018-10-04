#include "holberton.h"
/**
  * is_palindrome - checks on palindrome
  * @s: takes string
  * Return: int
  */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);

	if (length <= 1)
		return (1);
	return (_check(s, length));
}
/**
  * _strlen - string length
  * @s: takes string
  * Return: int
  */
int _strlen(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
  * _check - checks if palindrome
  * @s: takes string
  * @l: length
  * Return: int
  */
int _check(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	if (*s != s[l - 1])
	{
		return (0);
	}
	else
	{
		return (_check(s + 1, l - 2));
	}
}
