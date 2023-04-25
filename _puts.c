#include "main.h"
/**
 * _puts - writes the string s to stdout
 * @s: The string to print
 *
 * Return: On success the number of characters printed.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(char *s)
{
	int count = 0;
	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
