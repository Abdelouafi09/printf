#include "main.h"
/**
 * _strlen_recursion - return the length of s
 * @s: string to work on
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	if (*s)
	{
		c = 1;
		c += _strlen(s + 1);
	}
	return (c);
}
