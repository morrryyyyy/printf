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
	va_list args;

	count = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			count += _putchar(*format);
		}
		else if (*(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
			case 'c':
				count += _putchar(va_arg(args, int));
				break;
			case 's':
				count += print_str(va_arg(args, char *));
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				count += _putchar('%');
				count += _putchar(*format);
				break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
