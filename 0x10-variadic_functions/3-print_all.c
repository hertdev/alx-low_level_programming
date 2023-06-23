#include "variadic_functions.h"

/**
  * print_all - print both number and string
  * @format: list of type of arguments
  * Return: all formats
  */
void print_all(const char * const format, ...)
{
	va_list m;
	char *str, *sp = "";
	unsigned int i = 0;

	va_start(m, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(m, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(m, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(m, double));
					break;
				case 's':
					str = va_arg(m, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(m);
}
