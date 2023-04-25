#include "main.h"
/**
 * _strlen - display length
 * @s: char to operate on
 * Return: return an int
 */
int _strlen(char *s)
{
	int len = 0;
	char *t = s;

	while (*t != '\0')
	{
		len++;
		t++;
	}
	return (len);
}


/**
 * print - print char.
 * @s: string.
 *
 * Return: string length.
 */

int print(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		_putchar(s[i]);

	return (i);
}
