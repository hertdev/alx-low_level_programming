#include "main.h"

/**
  * _isalpha - check for character type
  * @c: integer to consider
  * Return: return 1 if c is a letter else 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
