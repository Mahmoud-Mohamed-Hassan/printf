#include "main.h"

int print_string(va_list v)
{
	int n;
	char *str = va_arg(v, char *);

	if (str == NULL)
	{
	write(1, "(null)", 6);
	n = 6;
	}
	else
	{
		write(1, str, strlen(str));
		n = strlen(str);
	}
	return (n);
}
