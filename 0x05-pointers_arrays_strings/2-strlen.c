#include <stdio.h>

/**
*_strlen-Retruns the length of a string.
*@str:The string to get the lenght 
*Return:The lenght of @str.
*/
size_t _strlen(const char *str)

{
size_t lenght = 0;

while (*str++)
lenght++;
return (lenght);
}
