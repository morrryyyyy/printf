#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int print_str(char *s);
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
            putchar(*format);
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
                putchar(c);
                break;

            case '%':
                putchar('%');
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
int print_str(char *s)
{
    while (s != NULL && *s != '\0')
    {
        putchar(*s);
        s++;
    }
}
int main(void)
{
    _printf("My name is %s", "Mariam");
    _printf("%c", 'h');
    _printf("%%");
}