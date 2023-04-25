#include "main.h"

/**
 * _puts - Entry point. Print string
 * @s: variable va_list
 *
 * Return: k (nbytes) 6 (NULL)
 */
int _puts(va_list s)
{
	char *str;
	int k;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (k = 0; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	return (k);
}
