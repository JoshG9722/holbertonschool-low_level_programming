int str_length(char *s);
int _check(char *s, int i, int j);
/**
  * is_palindrome - checks if string is palindrome
  * @s: takes string
  * Return: int
  */
int is_palindrome(char *s)
{
	int size;

	if (*s == '\0')
		return (1);
	size = str_length(s);
	return (_check(s, 0, size - 1));
}

/**
  * _check - checks string
  * @s: takes string
  * @i: int
  * @j: int
  * Return: int
  */
int _check(char *s, int i, int j)
{
	if (i > j / 2)
		return (1);
	if (*(s + i) == *(s + j - i))
		return (_check(s, i + 1, j));
	else
		return (0);
}
/**
  * str_length - returns length of string
  * @s: takes string
  * Return: int
  */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length(s + 1));
}
