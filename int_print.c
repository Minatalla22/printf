#include "main.h"
/**
 * i_print - int i & d
 * @format: int num
 * @arg: arguments
 *Return: num
 */
int i_print(const char *format, ...)
{
	int  num;
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
	return (num);
}
