#include <stdarg.h>
/**
 * sum_them_all - Add numbers
 * @n: numbers of args
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list myList;

	if (n != 0)
	{
		va_start(myList, n);
		for (i = 0; i < n; i++)
			sum += va_arg(myList, int);
		va_end(myList);
		return (sum);
	}
	else
		return (0);
}
