#include "main.h"
/**
 * percent_handle - Controller for percent format
 * @s: String format
 * @my_list: List of arguments
 * @i: Iterator
 *
 * Return: number of printed char
 **/
int percent_handle(const char *s, va_list my_list, int *i)
{
	int count, j, num_formats;
	format formats[] = {
		{'s', _puts}, {'c', _putc},
		{'d', _putn}, {'i', _putn}/**,
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}*/
	};

	*i = *i + 1;

	if (s[*i] == '\0')
		return (-1);

	if (s[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	num_formats = sizeof(formats) / sizeof(formats[0]);
	for (count = j = 0; j < num_formats; j++)
	{
		if (s[*i] == formats[j].type)
		{
			count = formats[j].f(my_list);
			return (count);
		}

	}

	_putchar('%'), _putchar(s[*i]);

	return (2);
}
