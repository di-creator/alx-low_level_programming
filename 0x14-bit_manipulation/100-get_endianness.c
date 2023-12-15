#include "main.h"

/**
 * get_endianness -  checks the endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
