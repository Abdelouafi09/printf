#include "main.h"

/**
 * _puts - Print string
 * @my_list: list.
 *
 * Return: String length.
 */

int _puts(va_list my_list)
{
	char *p;
	int len;

	p = va_arg(my_list, char*);
	len = print((p != NULL) ? p : "(null)");

	return (len);
}
