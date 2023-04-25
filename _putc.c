#include "main.h"

/**
 * _putc - Entry function. Print character
 * @list: variable va_list
 *
 * Return: 1 (nbyte)
 */
int _putc(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);

}
