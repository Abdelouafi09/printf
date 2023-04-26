#include "main.h"
/**
 * _putun - print ui
 * @my_list: va_list contain the arg to print
 *
 * Return: number of characters printed
 */
int _putun(va_list my_list)
{
	unsigned int n = va_arg(my_list, unsigned int);
	unsigned int div = 1, r;
	int d, count = 0;

	while (n / div > 9)
		div *= 10;

	while (div != 0)
	{
		d = (n / div) % 10;
		r = _abs(d);
		_putchar('0' + r);
		count++;
		div /= 10;
	}

	return (count);
}
