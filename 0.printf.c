#include "main.h"

/*
 * printf - entry point of the code
 * @format: format
 * return: 0 success
 */

int _printf(const char *format, ...)
{
	va_list args;
	int length;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
	{
		va_end(args);
		return (-1);
	}
	if (!format[0])
	{
		va_end(args);
		return (0);
	}
	length = handle_format(format, args);
	va_end(args);
	return (length);
}

