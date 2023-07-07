#include "main.h"

/**
  * get_endianness - check endianess
  * Return: little or large endianess
  */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);

	return (-1);
}
