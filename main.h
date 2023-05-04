#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct types - specifier for printf
 * @p: pointer to specifiers
 * @func : function pointer to print functions
 */

typedef struct types
{
	char p;
	int (*func)(va_list);
} print_f;

/**assistant functions*/
int _putchar(char c);
int _abs(int n);
int _toupper(int c);
int _strlen(char *s);

/**printf function that receive the arg*/
int _printf(const char *format, ...);

/**feature functions*/
int _putc(va_list l);
int _puts(va_list s);
int _putn(va_list n);
int _putb(va_list list);
int _putb(va_list my_list);
int _putun(va_list my_list);
int _putoct(va_list my_list);
int print_x(va_list arg);
int print_X(va_list arg);
int _putr(va_list my_list);
int _putrev(va_list my_list);
int _putS(va_list arg);
int _putp(va_list arg);

int (*_comp(const char a))(va_list);

#endif /* main_h */
