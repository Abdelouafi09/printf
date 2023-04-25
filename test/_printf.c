#include "main.h"

/**
 * _printf - print string to stdout
 * @format: string to display
 * Return: count
 */
int _printf(const char *format, ...)
{
	int counter;
	va_list args;

	if (format == NULL)
		return (-1);

	counter = _strlen(format);
	if (counter <= 0)
		return (0);

	va_start(args, format);
	counter = _handler(format, args);

	_putchar(-1);
	va_end(ags);

	return (counter);
}
