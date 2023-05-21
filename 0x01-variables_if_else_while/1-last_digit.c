#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Program entry point
  * 1-last_digit - Executable file name
  *
  * @n - Integer to assign random number
  *
  * Return: Last digit of the number
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is 8 and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	else
		printf("null");
	return (0);
}
