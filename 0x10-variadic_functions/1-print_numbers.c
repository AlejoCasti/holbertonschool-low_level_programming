#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print args
 * @separator: separator of the string
 * @n: numbers of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myList;

	va_start(myList, n);
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator)
				printf("%i%s", va_arg(myList, int), separator);
			else
				printf("%i", va_arg(myList, int));
		}
			printf("%i", va_arg(myList, int));
	}
	printf("\n");
	va_end(myList);
}
