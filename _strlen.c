#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char **p = &s;
	int len = 0;

	while (**p != '\0')
	{
		(*p)++;
		len++;
	}
	return (len);
}
