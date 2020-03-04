#include <stdlib.h>
/**
 * numWords - cont number of words
 * @str: string
 * Return: number of the word
 */
int numWords(char *str)
{
	int contador = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str - 1) == ' ')
				contador++;
		}
		str++;
	}
	return (contador);
}
/**
 * strtow - split the string
 * @str: string to split
 * Return: A matrix split of string
 */
char **strtow(char *str)
{
	char **p;
	int numWord, i = 0, j = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	numWord = numWords(str);
	p = malloc(sizeof(char *) * numWord + 1);
	if (!p)
		return (NULL);
	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str - 1) == ' ')
			{
				j = 0;
				while (str[j] != ' ')
					j++;
				p[i] = malloc(sizeof(char) * j + 1);
				if (p[i] == NULL)
					return (NULL);
				j = 0;
				while (*str != ' ')
				{
					p[i][j] = *str;
					j++;
					str++;
				}
				p[i][j] = '\0';
				i++;
			}
		}
		str++;
	}
	p[numWords + 1] = NULL;
	return (p);
}
