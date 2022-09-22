#include "main.h"

/**
 * reverse_array - function to reverse an array
 *
 * @a: array to be reversed
 * @n: lenght of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for(i=0; i < n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
	}
}
