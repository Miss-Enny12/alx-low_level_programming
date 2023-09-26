#include "main.h"
/**
 * print_diagsums - main function
 * @a: function parameter
 * @size: function parameter
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int num1;
	int num2;
	int x;

	for (x = 0; x < size; x++)
{
	num1 = num1 + a[x * size + x];
}
	for (x = size - 1; x >= 0; x--)
{
	num2 += a[x * size + (size - x - 1)];
}
	printf("%d, %d\n", num1, num2);
}
