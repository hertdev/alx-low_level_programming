#include "main.h"

/**
  * print_alphabet_x10 - prints lowercase alpha in ten places
  * Return: success
  */
void print_alphabet_x10(void)
{
	char alp;
	int places;

	for (places = 0; places <= 10; places++)
	{
		for (alp = 'a'; alp <= 'z'; alpha++)
		{
			_putchar(alp);
		}
	}
	_putchar('\n');
}
