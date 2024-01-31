#include "main.h"

/**
 * _putchar - prints a character to stdout
 *@c: the character
 *
 * Return: the caharacter
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
