#include "holberton.h"
/**
 * main - copy a file.
 * @ac: number of args
 * @av: args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int ans, ans1, ans2 = 1, clo, clo1;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "sage: cp file_from file_to\n");
		exit(97);
	}
	ans = open(av[1], O_RDONLY);
	if (ans < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	ans1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ans1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (ans2)
	{
		ans2 = read(ans, buffer, 1024);
		if (ans2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		else
		{
			if ((write(ans1, buffer, ans2)) == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	close(ans);
	close(ans1);
	return (0);
}
