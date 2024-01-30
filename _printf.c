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
	int count;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			switch (*(format + 1))
			{
			case 's':
				str = va_arg(args, char *);
				print_str(str);
				count++;
				break;
			case 'c':
				c = va_arg(args, int);
				_putchar(c);
				count++;
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			default:
				print_str("Error");
				count++;
				break;
			}
			format += 2;
			continue;
		}
		format++;
	}
	va_end(args);
	return (count);
}
