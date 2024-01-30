#include "main.h"

/**
 * print_str - prints a string to the standard output
 *@s: the string
 *
 * Return: Always 0
 */
int print_str(char *s)
{
	int count;

	if (s == NULL)
		return (0);

	count = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
