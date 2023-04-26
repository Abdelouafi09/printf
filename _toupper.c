#include "main.h"
#include <string.h>
/**
 * _toupper - lowercase to uppercase
 * @c: string to work on
 * Return: string in uppercase
 */
int _toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	else
	{
		return (c);
	}
}

