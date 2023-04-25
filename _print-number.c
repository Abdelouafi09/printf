#include "main.h"
/**
 * _print_number - prints an integer to stdout
 * @n: The integer to print
 *
 * Return: On success the number of characters printed.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count += _print_number(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}
