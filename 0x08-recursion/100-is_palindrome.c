#include "main.h"
#include <string.h>

/**
  * is_palindrome - prints a palindrome e.g madam
  * is also madam if reverse
  * @s: character pointer
  * Return: palindrome text
  */

int palindrome_check(char *s, int i, int len);

int is_palindrome(char *s)
{
	if (*s != '\0')
		return (0);
	return (1 + is_palindrome(s + 1));
}

/**
  * palindrome_check - check if palindrome
  * @s: string to check
  * @i: iterator
  * @len: length of the string
  * Return: palindrome
  */
int palindrome_check(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palindrome_check(s, i + 1, len - 1));
}
