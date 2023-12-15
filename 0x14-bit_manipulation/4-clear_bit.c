#include "main.h"
#include <stdlib.h>
/*
 * clear_bit: Clears the bit at the specified index 
 * Parameters: n - Pointer to the unsigned long integer
 * Returns: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
