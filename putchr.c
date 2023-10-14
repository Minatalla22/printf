#include "main.h"
/**
 * putchr - write
 * @z: z
 * Return:0 Success
 */
int putchr(char z)
{
	return (write(1, &z, 1));
}
