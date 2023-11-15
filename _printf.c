/**
 * _printf - prints %c,%s,%
 * @format: the format string
 *
 * Return: number of bytes printed
 */

#include "main.h"

int _printf(const char *format, ...)
{
	int no_of_char = 0, s_return = 0, d_return = 0, i_return = 0, c_return = 0;
	va_list arguments_list;

	if (format == NULL)
		return (-1);
	va_start(arguments_list, format);
		while (*format)
		{
			if (*format != '%')
			{write(1, format, 1);
			no_of_char++; }
			else
			{
				format++;
				if (*format == '%')
				{write(1, format, 1);
				no_of_char++; }
				else if (*format == 'c')
				{c_return = print_char(arguments_list);
					no_of_char += c_return; }
				else if (*format == 's')
				{s_return = print_string(arguments_list);
				no_of_char += s_return; }
					else if (*format == 'd')
					{d_return = print_numbers_d(arguments_list);
						no_of_char += d_return; }
					else if (*format == 'i')
					{i_return = print_numbers_i(arguments_list);
							no_of_char += i_return; }
			}
			format++;
		}
	va_end(arguments_list);
	return (no_of_char);
}
