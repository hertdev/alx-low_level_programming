#include <stdio.h>
/**
  * main - Program entry point
  * 4-print_alphabt - program printing alphabet
  *
  *Return: letters of alphabet except e and q
  */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		else
			NULL;
	}
	putchar('\n');
	return (0);
}
