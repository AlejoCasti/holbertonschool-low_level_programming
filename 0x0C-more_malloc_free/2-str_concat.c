#include <stdlib.h>
/**
 * str_len - documentation
 * @s: pointer
 * Return: the lenght of the array
 */
int str_len(char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	else
	{
		if (*s)
			return (1 + str_len(s + 1));
	}
	return (0);
}
/**
 * str_concat - documentation
 * @s1: array
 * @s2: array
 * Return: the new pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = str_len(s1);
	int size2 = str_len(s2);
	char *p = malloc((size1 * sizeof(char)) + (size2 + 1 * sizeof(char)));
	int i;

	if (size1 == 0)
		s1 = "";
	if (size2 == 0)
		s2 = "";
	if (!p)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (; i < size2 + size1; i++)
		p[i] = s2[i - size1];
	p[i] = '\0';
	return (p);
}
