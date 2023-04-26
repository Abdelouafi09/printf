#include "main.h"

/**
 * _putrev - print string in reverse
 * @my_list: list of char
 *
 * Return: number of printed char
 *
 */
int _putrev(va_list my_list)
{
	int len, i;
	char *s;

	s = va_arg(my_list, char*);
	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (len);
}
