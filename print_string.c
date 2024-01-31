#include "main.h"

/**
 * print_str - prints a string
 *@s: the string to be printed
 *
 * Return: the no of chars printed
 */
int print_str(char *s)
{
	int count;

	count = 0;
	if (s == NULL)
		s = "(null)";
	while (*s != '\0')
	{
		count += _putchar(*s);
		s++;
	}
	return (count);
}
