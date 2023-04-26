#include "main.h"


/**
 * put_hex - prints an unsigned int in hexadecimal
 * @my_list: the unsigned int to print
 * @uppercase: a flag indicating whether to print the letters in uppercase
 *
 * Return: the number of characters printed
 */
int put_hex(va_list my_list, int upp)
{
	unsigned int n = va_arg(my_list, unsigned int);
	char hex_chars[] = "0123456789abcdef";
	int base = 16;
	int count = 0;
	char buffer[32];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		buffer[i++] = hex_chars[n % base];
		n /= base;
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (upp)
			_putchar(_toupper(buffer[i]));
		else
			_putchar(buffer[i]);
		count++;
	}

	return (count);
}

/**
 * print_x - prints an unsigned int in lowercase hexadecimal
 * @arg: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int print_x(va_list arg)
{
	return (put_hex(arg, 0));
}

/**
 * print_X - prints an unsigned int in uppercase hexadecimal
 * @arg: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int print_X(va_list arg)
{
	return (put_hex(arg, 1));
}
