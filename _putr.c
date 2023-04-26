#include "main.h"

/**
 * _putr - encoder rot13
 * @my_list: string
 *
 * Return: *s
 */

int _putr(va_list my_list)
{
	char *str = va_arg(my_list, char*);
	char *rot13_chars = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			_putchar(rot13_chars[str[i] - 'A']);
		else if (str[i] >= 'a' && str[i] <= 'z')
			_putchar(rot13_chars[str[i] - 'a' + 26]);
		else
			_putchar(str[i]);

		count++;
	}

	return (count);
}
