#include "main.h"

/**
 * printf - write output to standard output
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
			switch(*format)
			{
			case 'c':
				c = va_arg(args, int);
				_putchar(c);
				count++;
				break;
			case 's':
				str = va_arg(args, char *);
				count += print_str(str);
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
