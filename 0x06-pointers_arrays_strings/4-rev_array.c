#include "main.h"

/**
 * reverse_array - reverses the array of two integers
 * @a: array
 * @n: number of elementsof array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
