#include "main.h"
#include <stdarg.h>


/**
 * _printf - print string to stdout
 * @format: string to display
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;
	const char *p = format;

	while (*p != '\0')
	{
		if (*p == '%')
		{
			switch (*(++p))
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					{
						char *str = va_arg(args, char *);
						int len = _strlen(str);

						write(1, str, len);
						count += len;
						break;
					}
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar('%');
					_putchar(*p);
					count += 2;
			}
		}
		else
		{
			_putchar(*p);
			count++;
		}
		p++;
	}

	va_end(args);
	return (count);
}
