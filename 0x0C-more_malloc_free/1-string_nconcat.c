#include <stdlib.h>
/**
 * str_len - documentation
 * @s: pointer
 * Return: the lenght of the array
 */
unsigned int str_len(char *s)
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
 * string_nconcat - Concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: number of the char to concatenate
 * Return: return a pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = str_len(s1);
	unsigned int size2 = str_len(s2);
	char *p;
	unsigned int i;

	if (n > size2)
		p = malloc((size1 * sizeof(char)) + (size2 + 1 * sizeof(char)));
	else
		p = malloc((size1 * sizeof(char)) + (n + 1 * sizeof(char)));
	if (size1 == 0)
		s1 = "";
	if (size2 == 0)
		s2 = "";
	if (!p)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	if (n > size2)
	{
		for (; i < size1 + size2; i++)
			p[i] = s2[i - size1];
	}
	else
	{
		for (; i < size1 + n; i++)
			p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (p);
}
