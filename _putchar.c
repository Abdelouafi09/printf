/**
 * _putchar - writes a character to the standard output
 * @c: the character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
