#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print a string
 * @separator: separator of string
 * @n: numbers args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myList;
	char *s;

	va_start(myList, n);

	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(myList, char *);
			if (s != NULL)
			{
				if (separator)
					printf("%s%s", s, separator);
				else
					printf("%s", s);
			}
			else
			printf("(nil)");
		}
		s = va_arg(myList, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		va_end(myList);
	}
	printf("\n");
}
