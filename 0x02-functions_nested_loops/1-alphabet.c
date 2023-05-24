#include "main.h"

/**
  * print_alphabet - print lowercase alphabet
  * Return: Always success (0)
  */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
}

int main(void)
{
	result = print_alphabet();
	return (result);
}
