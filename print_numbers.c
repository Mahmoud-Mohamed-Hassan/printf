#include "main.h"

int print_numbers_i(va_list v)
{
	int n = va_arg(v, int);
	int number, last_number = n % 10, digit, x = 1;
	int i = 1;

	n = n / 10;
	number = n;
	if (last_number < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		last_number = -last_number;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			x = x * 10;
			number = number / 10;
		}
		number = n;
		while (x > 0)
		{
			digit = number / x;
			_putchar(digit + '0');
			number = number - (digit * x);
			x = x / 10;
			i++;
		}
	}
	_putchar(last_number + '0');
	return (i);
}
int print_numbers_d(va_list v)
{
	int n = va_arg(v, int);
	int number, last_number = n % 10, digit, x = 1;
	int index = 1;

	n = n / 10;
	number = n;
	if (last_number < 0)
{
	_putchar('-');
	number = -number;
	n = -n;
	last_number = -last_number;
	index++;
}
if (number > 0)
{
	while (number / 10 != 0)
	{
		x = x * 10;
		number = number / 10;
	}
	number = n;
	while (x > 0)
	{
		digit = number / x;
		_putchar(digit + '0');
		number = number - (digit * x);
		x = x / 10;
		index++;
	}
}
_putchar(last_number + '0');
return (index);
}
