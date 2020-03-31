#include "holberton.h"
#include <stdlib.h>
/**
 * create_file - reads a text file and prints it
 * @filename: file name
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int ans, ans1 = 0;

	ans = open(filename, O_CREAT | O_WRONLY, 0600);
	if (ans == -1)
		return (write(STDOUT_FILENO, "fails", 5), -1);
	if (!filename)
		return (-1);
	while (text_content[ans1])
		ans1++;
	write(ans, text_content, ans1);
	close(ans);
	return (1);
}
