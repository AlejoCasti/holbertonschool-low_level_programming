#include <stdlib.h>
/**
 * str_len - documentation
 * @s: pointer
 * Return: the lenght of the array
 */
int str_len(char *s)
{
	if (*s)
		return (1 + str_len(s + 1));
	return (0);
}
/**
 * argstostr - documentation
 * @ac: array
 * @av: array
 * Return: the new pointer
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, tam = 0, total = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		tam += str_len(av[i]);
	p = malloc(sizeof(char) * tam + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[total] = av[i][j];
			total++;
		}
		p[total++] = '\n';
	}
	p[total] = '\0';
	return (p);
}
