#include <stdio.h>
/**
  * main - Program entry point
  * 7-print_tebahpla - program printing alphabet
  *
  *Return: letters of alphabet in reverse order
  */
int main(void)
{
	char revAlpha = 'z';

	while (revAlpha >= 'a')
	{
		putchar(revAlpha);
		revAlpha--;
	}
	putchar('\n');
	return (0);
}
