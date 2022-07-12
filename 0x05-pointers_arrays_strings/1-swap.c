#include "main.h"

/**
 * swap_int - a function that swap two integers
 * @a: a pointer pointing to the value of the first integer and
 * also a parameter of the function
 * @b: a pointer pointing to the value of the second integer and
 * also a parameter of the function
 */
void swap_int(int *a, int *b)
{
	int hey = *a;
	*a = *b;
	*b = hey;
}

