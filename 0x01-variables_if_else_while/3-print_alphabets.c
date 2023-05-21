#include <stdio.h>
/**
  * main - Program entry point
  * 3-print_alphabets - program to print
  *
  * Return: Always success (0)
  */
int main(void)
{
	char lowerCase, upperCase;

	lowerCase = 'a';
	upperCase = 'A';

	while (lowerCase <= 'z')
	{
		printf("%c", lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		printf("%c", upperCase);
		upperCase++;
	}
	return (0);
}
