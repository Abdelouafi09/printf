#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);

int _strlen(char *s);
int print(char *s);
int _putchar(char c);

int _putn(va_list my_list);
int _puts(va_list my_list);
int _putc(va_list my_list);

int percent_handle(const char *s, va_list my_list, int *i);
int handler(const char *s, va_list my_list);

#endif
