#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_


#include <stddef.h>


int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif /* FUNCTION_POINTERS_H*/


/*1-array_iterator.c*/


#include "function_pointers.h"


/**
* array_iterator - a function given as a
* parameter on each element of an array.
*
* @array: array to execute func on
* @size: is the size of the array
* @action:  is a pointer to the function you need to use
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
   size_t i;


   if (array && action)
   {
       i = 0;
       while (i < size)
       {
           action(array[i]);
           i++;
       }
   }
}


/*2-int_index.c*/


#include "function_pointers.h"


/**
* int_index - ...
* @array: ...
* @size: ...
* @cmp: ...
*
* Return: ...
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;


if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);


i++;
}
}
}


return (-1);
}


/*3-calc.h*/


#ifndef _HEADER_
#define _HEADER_
/**
* struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
   char *op;
   int (*f)(int a, int b);
} op_t;


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif

