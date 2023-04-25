#include "main.h"
/**
 * _putc - print char.
 * @my_list: va_list.
 *
 * Return: 1
 */
int _putc(va_list my_list)
{
	int a;

	a = va_arg(my_list, int);

	_putchar(a);

	return (1);
}
