#include "main.h"

/**
 * int_print - print %d %i
 * @format: string
 * Return: int
 */

int int_print(const char *format, ...)
{
	int print_i = 0;
	int num;
	va_list list_args;

	va_start(list_args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'i' || *format == 'd')
			{
				num = va_arg(list_args, int);
				write(1, &num, 4);
			}
		}
	format++;
	}
	va_end(list_args);
}
