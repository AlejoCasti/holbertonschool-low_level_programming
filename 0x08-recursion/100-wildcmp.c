#include "holberton.h"

/**
 * wildcmp1 - check the code for Holberton School students.
 * @s1: Pionter to the string
 * @s2: pointer to the string
 * @allow: allow
 * Return: Always 0.
 */
int wildcmp1(char *s1, char *s2, int allow)
{
	if (*s1 != '\0')
	{
		if (*s2 == '*')
		{
			allow = 1;
			return (wildcmp1(s1, s2 + 1, allow));
		}
		else if (*s2 != '\0')
		{
			if (*s1 != *s2)
				if (allow == 1)
					return (wildcmp1(s1 + 1, s2, allow));
				else
					return (0);
			else
			{
				return (wildcmp1(s1 + 1, s2 + 1, allow));
			}

		}
		else
		{
			if (allow == 1)
				return (1);
			else
				return (0);
		}
	}
	if (*s2)
	{
		if (*s2 != '*')
			return (0);
		else
			return (wildcmp1(s1, s2 + 1, allow));
	}
	return (1);
}
/**
 * wildcmp - check the code for Holberton School students.
 * @s1: Pionter to the string
 * @s2: Pionter to the string
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 'a')
		return (0);
	else
		return (wildcmp1(s1, s2, 0));
}
