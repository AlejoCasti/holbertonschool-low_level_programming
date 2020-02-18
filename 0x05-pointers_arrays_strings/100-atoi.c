#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - Casting of a string to integer.
 * @s: Variable to change.
 * Return: Integer;
 */
int _atoi(char *s)
{
	unsigned int sum = 0;
	int i = 0, neg = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' || s[i] <= '9' || s[i] == '-')
		{
			if (s[i] == '-')
				neg = neg * (-1);
			else if (s[i] >= '0' && s[i] <= '9')
			{
				sum = sum * 10;
				sum += s[i] - '0';
			}
			else if (sum != 0)
				break;
		}
		i++;
	}
	return (sum * neg);
}
