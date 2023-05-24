#include "main.h"

/**
  * main - program entry point
  * Return: Always success (0)
  */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

/**
  * print_alphabet - print lowercase alphabet
  * Return: lowercase alphabet
  */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
}
