#include "main.h"

/**
 * my_puts - print a string with new line
 * @str: the string to point
 * Return: void
 */
int my_puts(char *str)
{
	int i = 0, b = 0, s;
	char *x = "(null)";

	if (!str)
	{
		for (s = 0 ; s < 6 ; s++)
			my_putchr(x[s]);
		return (s);
	}
	while (str[i] != '\0')
	{
		my_putchr(str[i]);
		b++;
		i++;
	} return (b);
}
