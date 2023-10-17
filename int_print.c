#include "main.h"
/**
 * i_print - int i & d
 * @format: int num
 *Return: num
 */
int i_print(const char *format, ...)
{
	int  i;
	va_list list_args;

	va_start(list_args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'i' || *format == 'd')
			{
				i = va_arg(list_args, int);
				my_putchr(i);
			}
		}
		format++;
	}
	va_end(list_args);
	return (i);
}
