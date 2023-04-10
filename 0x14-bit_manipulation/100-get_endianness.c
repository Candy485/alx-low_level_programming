#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 when big endian, 1 when little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
