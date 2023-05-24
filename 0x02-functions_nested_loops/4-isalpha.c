#include "main.h"

/**
  * _isalpha - check for character type
  * @c: integer to consider
  * Return: return 1 if c is a letter else 0
  */
int _isalpha(int c)
{
<<<<<<< HEAD
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
=======
	if (c == 'a' && c == 'A')
>>>>>>> aae9984c922ca6ae5f0ef3b41bb71a904a34644d
		return (1);
	else
		return (0);
}
