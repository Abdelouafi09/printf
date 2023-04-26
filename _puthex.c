#include "main.h"


/**
 * print_hex - prints an unsigned int in hexadecimal
 * @arg: the unsigned int to print
 * @uppercase: a flag indicating whether to print the letters in uppercase
 *
 * Return: the number of characters printed
 */
int print_hex(va_list arg, int uppercase)
{
	unsigned int n = va_arg(arg, unsigned int);
	char hex_chars[] = "0123456789abcdef";
	int base = 16;
	int printed_chars = 0;
	char buffer[32];
	int i = 0;

	if (n == 0)
	{
		putchar('0');
		return (1);
	}

	while (n != 0)
	{
		buffer[i++] = hex_chars[n % base];
		n /= base;
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (uppercase)
			putchar(_toupper(buffer[i]));
		else
			putchar(buffer[i]);
		printed_chars++;
	}

	return (printed_chars);
}

/**
 * print_x - prints an unsigned int in lowercase hexadecimal
 * @arg: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int print_x(va_list arg)
{
	return (print_hex(arg, 0));
}

/**
 * print_X - prints an unsigned int in uppercase hexadecimal
 * @arg: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int print_X(va_list arg)
{
	return (print_hex(arg, 1));
}
