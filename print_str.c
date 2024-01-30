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

	count = 0;
	while (s != NULL && *s != '\0')
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
