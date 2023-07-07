#include "main.h"

/**
  * get_bit - return value of bit at given index
  * @n: number of bit
  * @index: bit index
  *
  * Return: bit at a given index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}

