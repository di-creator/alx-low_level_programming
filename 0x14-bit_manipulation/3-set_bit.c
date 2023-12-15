#include "main.h"

/*
 * set_bit: Sets the bit at the specified index 
 * Parameters: n - Pointer to the unsigned long integer
 * Returns: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
