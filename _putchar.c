#include "main.h"
/**
 * _putchar - prints the char
 * @x: char
 * Return: the return of write func
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
