#include "main.h"
/**
 * print_int - print
 * @n: print
 * Return: str
 */
char *print_int(int n)
{
	static char buffer[BUFF_SIZE];

	sprintf(buffer, "%d", n);
	return (buffer);
}
