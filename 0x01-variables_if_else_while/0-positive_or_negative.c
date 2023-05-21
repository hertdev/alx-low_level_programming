#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Program entry point
  * 0-positive_or_negative - Prints positive or negative numbers
  *
  * @n: integer to assign random number
  *
  * Return: positive or negative number, else (1)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("Null");
	return (0);
}
