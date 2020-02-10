#include "holberton.h"
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if(islower(c) > 0)
		return(1);
	else
		return(0);
}
