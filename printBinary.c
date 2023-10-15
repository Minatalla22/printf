#include "main.h"
/**
 * printBinary - enty point of the code
 * @num: num
 * Return: 0 Success
 */
int printBinary(unsigned int num)
{
	char buffer[BUFF_SIZE], tmp;
	int index = 0;
	int i, digit;

	if (num == 0)
	{
		buffer[index++] = '0';
	}
	else
	{
		while (num > 0)
		{
			digit = num % 2;
			buffer[index++] = '0' + digit;
			num /= 2;
		}
	}
	if (index == 0)
	{
		buffer[index++] = '0';
	}
	buffer[index] = '\0';

	for (i = 0; i < index / 2; i++)
	{
		tmp = buffer[i];
		buffer[i] = buffer[index - 1 - i];
		buffer[index - 1 - i] = tmp;
	}
	buffer[index] = '\0';
	return (my_puts(buffer));
}
