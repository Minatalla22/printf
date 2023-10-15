#include "main.h"
/**
 * my_putchr - write
 * @z: z
 * Return:0 Success
 */
int my_putchr(char z)
{
	return (write(1, &z, 1));
}
