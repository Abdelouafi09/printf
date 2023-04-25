#include "main.h"

/**
 * _putn - Print number
 * @n: Variable va_list
 *
 * Return: count (nbytes)
 */
int _putn(va_list n)
{

	long int number;
	int counter, aux_variable, base;

	counter = 0;
	number = va_arg(n, int);

	if (number < 0)
	{
		number *= -1;
		_putchar(45);
		counter++;
	}
	if (number >= 0 && number <= 9)
	{
		_putchar(number + 48);
		counter++;
	}
	if (number > 9)
	{
		base = 10;

		while (number / base > 9)
		{
			base *= 10;
		}

		while (base > 0)
		{
			aux_variable = number / base;
			number = number % base;
			_putchar(aux_variable + 48);
			base = base / 10;
			counter++;
		}
	}
	return (counter);
}
