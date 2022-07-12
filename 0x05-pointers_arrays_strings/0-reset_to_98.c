#include "main.h"

/*
*this function takes a pointer to an int as 
*parameter and updates the value it points
* to to 98.
*/
void reset_to_98(int *n)
{
	int hey = 98;
	*n = hey;
}