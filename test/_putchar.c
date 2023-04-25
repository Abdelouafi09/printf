#include "main.h"
/**
 * _putchar - display the char c
 * @c: char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - Save char in a buffer
 * @c: Character
 *
 * Return: 1
 **/
int buffer(char c)
{
	static char buffers[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffers, i);
		i = 0;
	}

	if (c != -1)
		buffers[i++] = c;

	return (1);
}
