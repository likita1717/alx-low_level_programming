#include "main.h"

/**
 * swap_int - swaps the values of two intigers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int q;


	int q = *a;
	*a = *b;
	*b = q;
}
