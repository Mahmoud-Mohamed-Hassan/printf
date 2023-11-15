/**
 * _printf - prints %c,%s,%
 * @format: the format string
 *
 * Return: number of bytes printed
 */

#include "main.h"

int _printf(const char *format, ...)
{
	int no_of_char = 0;
	va_list arguments_list;

	if (format == '\0')
		return (-1);
	va_start(arguments_list, format)
		while (*format)
		{
			if (*format != '%')
			{
				write(1, format, 1);
						no_of_char++;
			}
			else
			{
				format++;
				if (*format == '%')
				{
					write(1, format, 1;)
						no_of_char++;
				}
				else if (*format == 'c')
				{
					char letter = va_arg(arguments_list, int);
						write(1, &letter, 1);
							no_of_char++;
				}
				else if (*format == 's')
				{
					char *ptrToString = va_arg(argumentslist, char *);
						write(1, ptrToString, strlen(ptrToString));
							no_of_char += strlen(ptrToString);
				}
			}
			format++;
		}
	va_end(arguments_list);
	return (no_of_char);
}
