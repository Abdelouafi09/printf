#include "main.h"
/**
 * _putoct - Prints an unsigned integer argument as an octal number.
 * @my_list: A va_list containing the unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int _putoct(va_list my_list)
{
	unsigned int n = va_arg(my_list, unsigned int);
	unsigned int t = n;
	int octDgt = 0;
	int count = 0;
	int i;

	/* Count number of octal digits in the number */
	do {
		t /= 8;
		octDgt++;
	} while (t != 0);

	/* Print the octal digits */
	for (i = octDgt - 1; i >= 0; i--)
	{
		_putchar('0' + ((n >> (i * 3)) & 7));
		count++;
	}

	return (count);
}
