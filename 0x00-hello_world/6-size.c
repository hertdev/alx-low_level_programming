#include <stdio.h>
/**
  * main - print size of types
  *
  * Return - Always Success (0)
  */
int main(void)
{
	char sizeOfChar;
	int sizeOfInt;
	long int sizeOfLongInt;
	long long int sizeOfLLInt;
	float sizeOfFloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(sizeOfChar));
	printf("Size of an int: %zu byte(s)\n", sizeof(sizeOfInt));
	printf("Size of a long int: %zu byte(s)\n", sizeof(sizeOfLongInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(sizeOfLLInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(sizeOfFloat));

	return (0);
}
