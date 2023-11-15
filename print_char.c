#include "main.h"
/**
 * print_char - prints the char
 * @v: va list
 * Return: n
 */
int print_char(va_list v)
{
int n = 0;
char c = va_arg(v, int);
_putchar(c);
n++;
return (n);
}
