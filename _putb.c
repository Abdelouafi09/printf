#include "main.h"

/**
 * _putb - convert unsigned int to binary and print
 * @my_list: va_list containing the argument to print
 *
 * Return: number of characters printed
 */
int _putb(va_list my_list)
{
	unsigned int n = va_arg(my_list, unsigned int);
	unsigned int b_num[32];
	int i = 0, j;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		b_num[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(b_num[j] + '0');
		count++;
	}

	return (count);
}
