#include "main.h"

/**
 * _puthex - Prints an unsigned integer argument as a hexadecimal number.
 * @my_list: A va_list containing the unsigned integer to be printed.
 * @upp: A flag indicating uppercase or lowercase.
 *
 * Return: The number of characters printed.
 */
int _puthex(va_list my_list, int upp)
{
	unsigned int n = va_arg(my_list, unsigned int);
	char hexDigits[] = "0123456789abcdef";
	char hexChar;
	int hexLen = 0, i;
	int count = 0, digit;

	/* Count number of hexadecimal digits in the number */
	do {
		n /= 16;
		hexLen++;
	} while (n != 0);

	/* Print the hexadecimal digits */
	for (i = hexLen - 1; i >= 0; i--)
	{
		digit = (n >> (i * 4)) & 0xf; /* Extract the next hexadecimal digit */
		hexChar = upp ? _toupper(hexDigits[digit]) : hexDigits[digit];
		_putchar(hexChar);
		count++;
	}

	return (count);
}

/**
 * _puthex_lower - Prints an ui lowercase hexadecimal number.
 * @my_list: A va_list containing the unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int _puthex_lower(va_list my_list)
{
	return (_puthex(my_list, 0));
}

/**
 * _puthex_upper - Prints an ui argument as an uppercase hexadecimal number.
 * @my_list: A va_list containing the unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int _puthex_upper(va_list my_list)
{
	return (_puthex(my_list, 1));
}
