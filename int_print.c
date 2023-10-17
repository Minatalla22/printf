#include "main.h"
/**
 * i_print - int i & d
 * @format: int num
 * @arg: arguments
 *Return: num
 */
int i_print(const char *format, va_list arg)
{
	int i = 0;
	unsigned int n = 0, v = 0;
	int v2 = 0;

	for (; format[n] != '\0'; n++)
	{
		if (format[n + 1] == 'd' || format[n + 1] == 'i')
		{
			i = va_arg(arg, int);
			v2 = my_puts(print_int(i));
			v += (v2 - 1);
			n++;
		}
	}
	return (v);
}
