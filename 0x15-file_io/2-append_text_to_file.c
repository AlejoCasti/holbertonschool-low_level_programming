#include "holberton.h"
#include <stdlib.h>
/**
 * append_text_to_file - reads a text file and prints it
 * @filename: file name
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ans, ans1 = 0;

	ans = open(filename, O_RDWR | O_APPEND);
	if (ans == -1)
		return (-1);
	if (!text_content)
		return (1);
	if (!filename)
		return (-1);
	while (text_content[ans1])
		ans1++;
	if (write(ans, text_content, ans1) == -1)
		return (close(ans), -1);
	close(ans);
	return (1);
}
