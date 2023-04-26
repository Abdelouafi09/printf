#include "main.h"
/**
 * _comp - Entry point
 * @c: character.
 *
 * Return: 0.
 */
int (*_comp(const char c))(va_list)
{
	int i;

	print_f printf[] = {
		{'c', _putc},
		{'s', _puts},
		{'d', _putn},
		{'i', _putn},
		{'b', _putb},
		{'u', _putun},
		{'o', _putoct},
		{'x', _puthex_lower},
		{'X', _puthex_upper},
		{'\0', NULL}
	};

	for (i = 0; printf[i].p != '\0'; i++)
	{
		if (printf[i].p == c)
		{
			return (printf[i].func);
		}
	}

	return (0);
}
