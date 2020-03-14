#include "variadic_functions.h"
/**
 * p_char - add two numbers
 * @list: list of args
 */
void p_char(va_list list)
{
	printf("%c",  va_arg(list, int));
}
/**
 * p_int - add two numbers
 * @list: list of args
 */
void p_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * p_string - add two numbers
 * @list: list of args
 */
void p_string(va_list list)
{
	char *a =  va_arg(list, char *);

	if (a == NULL)
		a = "(nil)";
	printf("%s", a);
}
/**
 * p_float - add two numbers
 * @list: list of args
 */
void p_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_all - print every arguments
 * @format: format of string
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list myList;
	op_t ops[] = { {'c', p_char}, {'i', p_int}, {'f', p_float}, {'s', p_string}};
	char *s = "";

	va_start(myList, format);
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ops[j].op)
			{
				printf("%s", s);
				ops[j].f(myList);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(myList);
}
