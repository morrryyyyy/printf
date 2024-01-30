#include <stdio.h>

int print_str(char *s)
{
    while (s != NULL && *s != '\0')
    {
        putchar(*s);
        s++;
    }
}