#include "variadic_functions.h"

/**
  * print_strings - prints strings followed by new line
  * @separator: string to print in btw
  * @n: number of strings passed
  * Return: strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int i;
	char *str;

	va_start(m, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(m, char*);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	va_end(m);

	printf("\n");
}
