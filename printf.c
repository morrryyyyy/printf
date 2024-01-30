#include "main.h"

/**
 *_printf - prints to the standard output
 *@format: format specifier
 *
 * Return: no of chars printed
 */
int _printf(const char *format, ...)
{
	char *str;
	char c;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
		}
		else
		{
			switch (*(format + 1))
			{
			case 's':
				str = va_arg(args, char *);
				print_str(str);
				break;
			case 'c':
				c = va_arg(args, int);
				_putchar(c);
				break;
			case '%':
				_putchar('%');
				break;
			default:
				print_str("Error");
				break;
			}
			format += 2;
			continue;
		}
		format++;
	}
	va_end(args);
	return (0);
}
