#include "main.h"
#include <stdlib.h>

/**
  * _atoi - convert a string to an integer
  * @s: pointer to char
  * Return: Integer
  */
int _atoi(char *s)
{
	int i, neg, result;
	short boolean;

	i = neg = result = boolean = 0;
	neg = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg = neg * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10;
			result = result - (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result = result * neg;
	return (result);
}
