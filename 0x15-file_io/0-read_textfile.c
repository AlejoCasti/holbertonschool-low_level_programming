#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @letters: number of letters
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ans, ans1;
	char *ptr = malloc(letters + 1);

	ans = open(filename, O_RDONLY);
	if (!ptr || !filename || ans == -1)
		return (free(ptr), 0);
	ans1 = read(ans, ptr, letters);
	ptr[letters] = '\0';
	write(STDOUT_FILENO, ptr, letters);
	close(ans);
	free(ptr);
	return (ans1);
}
