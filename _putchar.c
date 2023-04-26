#include "main.h"
/**
 * _putchar - display characteres
 * @c: variable va_list
 *
 * Return: Writed character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
