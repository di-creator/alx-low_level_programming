#include <unistd.h>

/*
 * _putchar: Writes a single character to the standard output.
 * Parameters: c - The character to be written.
 * Returns:returns the number  (1). On error, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
