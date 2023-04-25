#include "main.h"
/**
 * _putn - Print a number in base 10
 * @my_list: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/
int _putn(va_list my_list)
{
	char *buff;
	int count;

	buff = itoa(va_arg(list, int), 10);

	count = print((buff != NULL) ? buff : "NULL");

	return (count);
}
