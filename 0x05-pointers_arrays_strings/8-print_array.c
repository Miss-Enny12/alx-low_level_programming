#include <stdio.h>
/**
 * print_array - function name
 * @a: function parameter
 * @n: function parameter 2
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
{
	printf("%d", a[b]);

	if (b < n - 1)
		printf(", ");
}
	printf("\n");
}
