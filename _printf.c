int _printf(const char *format, ...)
{
  va_list args;
  int count = 0;

  va_start(args, format);

  while (*format)
    {
      if (*format == '%')
	{
	  format++;
	  switch (*format)
	    {
	    case 'c':
	      _putchar(va_arg(args, int));
	      count++;
	      break;
	    case 's':
	      {
		char *str = va_arg(args, char *);
		if (!str)
		  str = "(null)";
		count += _puts(str);
		break;
	      }
	    case 'd':
	    case 'i':
	      count += _print_number(va_arg(args, int));
	      break;
	    case '%':
	      _putchar('%');
	      count++;
	      break;
	    default:
	      _putchar('%');
	      _putchar(*format);
	      count += 2;
	      break;
	    }
	}
      else
	{
	  _putchar(*format);
	  count++;
	}
      format++;
    }

  va_end(args);

  return (count);
}
