#include "main.h"

/**
 * handle_format - entry point
 * @args: args
 * @format: format
 * Return:0 Success
 */
int handle_format(const char *format, va_list args)
{
	unsigned int h = 0, r_value = 0;
	int r_val, num;

	for (; format[h] != '\0'; h++)
	{
		if (format[h] != '%')
			my_putchr(format[h]);
		else if (format[h + 1] == 'c')
		{
			my_putchr(va_arg(args, int));
			h++;
		}
		else if (format[h + 1] == 's')
		{
			r_val = my_puts(va_arg(args, char *));
		h++;
		r_value += (r_val - 1);
		}
		else if (format[h + 1] == 'b')
		{
			r_val += (printBinary(va_arg(args, unsigned int))) - 1;
			h++;
		}
		else if (format[h + 1] == 'd' || format[h + 1] == 'i')
		{
			num = va_arg(args, int);
			r_val = my_puts(print_int(num));
			r_value += (r_val - 1);
			h++;
		}
		else if (format[h + 1] == '%')
		{
			my_putchr('%');
			h++;
		}
		else
			my_putchr('%');
	}
	return (r_value);
}
