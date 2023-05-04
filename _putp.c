#include "main.h"
/**
 * _print_hex_long - prints a long integer value in hexadecimal format
 * @n: the long integer to print
 *
 * Return: the number of characters printed
 */
int _print_hex_long(unsigned long int n)
{
	int len = 0;

	if (n / 16)
		len += _print_hex_long(n / 16);

	if (n % 16 < 10)
		_putchar((n % 16) + '0');
	else
		_putchar((n % 16) - 10 + 'a');

	len++;

	return (len);
}


/**
 * _putp - prints the address of a pointer in hexadecimal format
 * @arg: a pointer to the pointer to print
 *
 * Return: the number of characters printed
 */
int _putp(va_list arg)
{
	void *ptr = va_arg(arg, void *);
	unsigned long int value = (unsigned long int) ptr;
	int len = 0;

	if (!ptr)
	{
		return (_printf("(nil)"));
	}

	_putchar('0');
	_putchar('x');
	len += 2;

	if (value == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		len += _print_hex_long(value);
	}

	return (len);
}
