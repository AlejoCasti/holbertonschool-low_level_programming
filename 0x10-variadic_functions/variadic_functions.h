#ifndef HOLBERTON_DEF
#define HOLBERTON_DEF
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char op;
	void (*f)();
} op_t;
void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
