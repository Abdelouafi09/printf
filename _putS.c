#include "main.h"

/**
 * _print_hex - prints a character as a hexadecimal value.
 * @c: the character to print
 *
 * Return: the number of characters printed (always 2)
 */
int _print_hex(char c)
{
	int i, len = 0;
	char hex_digits[] = "0123456789ABCDEF";

	for (i = 1; i >= 0; i--)
	{
		_putchar(hex_digits[(c >> (i * 4)) & 0xF]);
		len++;
	}

	return (len);
}

/**
 * _putS - prints a string, replacing non-printable characters with
 * their ASCII codes in hexadecimal.
 * @arg: a pointer to the string to print
 *
 * Return: the number of characters printed
 */
int _putS(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i, len = 0;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			if (str[i] == '\n')
			{
				_putchar('\n');
				len++;
			}
			else
			{
				_putchar('\\');
				_putchar('x');
				len += 2;
				len += _print_hex(str[i]);
			}
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}

	return (len);
}
