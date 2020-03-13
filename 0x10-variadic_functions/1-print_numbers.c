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

	if (separator)
	{
		va_start(myList, n);
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(myList, int), separator);
		printf("%d\n", va_arg(myList, int));
		va_end(myList);
	}
}
