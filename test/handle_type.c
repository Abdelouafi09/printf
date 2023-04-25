#include "main.h"

/**
 * handler - Format controller
 * @s: String format
 * @my_list: List of arguments
 *
 * Return: number of printed char
 **/
int handler(const char *s, va_list my_list)
{
	int count, i, a;

	count = 0;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '%')
		{
			a = percent_handle(s, my_list, &i);
			if (a == -1)
				return (-1);

			count += a;
			continue;
		}

		_putchar(s[i]);
		count++;
	}


	return (count);
}
