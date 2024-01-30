#include "main.h"

/**
 * print_str - prints a string to the standard output
 *@s: the string to be printed
 *
 *Return: ALways 0(Success)
 */
int print_str(char *s)
{
	int count;

	count = 0;
	while ((s != NULL) && (*s != '\0'))
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}
