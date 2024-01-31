#include "main.h"

/**
 * print_int - prints an integer to stdout
 *@n: the integer
 *
 * Return: the number of characters printed
 */
int print_int(int n)
{
	int index, j, count;
	char buff[20];

	count = 0;

	if (n == INT_MIN)
	{
		count += _putchar('-');
		count += _putchar('2');
		count += print_int(INT_MAX % 1000000000 + 1);
		return (count);
	}
	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	for (index = 0; n != 0; index++)
	{
		buff[index] = '0' + (n % 10);
		n /= 10;
	}
	for (j = index - 1; j >= 0; j--)
	{
		count += _putchar(buff[j]);
	}
	return (count);
}
