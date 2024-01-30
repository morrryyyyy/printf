#include "main.h"

/**
 * _printf - write output to standard output
 *@format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count;
	char *str;
	char c;
	va_list args;

	count = 0;
	va_start(args, format);
	while (format != NULL && *format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				_putchar(va_arg(args, int));
				count++;
				break;
			case 's':
				count += print_str(va_arg(args, char *));
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			default:
				count += print_str("Unidentified specifier");
				break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
