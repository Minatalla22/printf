#include "main.h"
#include "handle_format_file.h"
/**
 * _printf - This is the entry point of the code
 * @format: format
 * Return: the number of characters printed (excluding the null byte)
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

