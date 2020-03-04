#include <stdlib.h>
/**
 * numWords - cont number of words
 * @str: string
 * Return: number of the word
 */
int numWords(char *str)
{
	int contador = 0, z = 0;

	while (str[z] != 0)
	{
		if (str[z] != ' ')
		{
			if (str[z - 1] == ' ' || z == 0)
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
	int numWord, i = 0, j = 0, z = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	numWord = numWords(str);
	p = malloc(sizeof(char *) * numWord + 1);
	if (!p)
		return (NULL);
	while (str[z] != '\0')
	{
		if (*str != ' ')
		{
			if (str[z - 1] == ' ' || z == 0)
			{
				j = 0;
				while (str[j + z] != ' ' && str[j + z] != '\0')
					j++;
				p[i] = malloc(sizeof(char) * j + 1);
				if (p[i] == NULL)
					return (NULL);
				j = 0;
				while (str[z] != ' ' && str[z] != '\0')
				{
					p[i][j] = str[z];
					j++;
					z++;
				}
				p[i][j] = '\0';
				i++;
			}
		}
		z++;
	}
	p[i] = NULL;
	return (p);
}
