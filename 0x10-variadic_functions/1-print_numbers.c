#include <stdio.h>
#include <stdsrg.h>
/**
 * print_numbers - prints number with a new line
 * @seperator: the string
 * @n: the number of integers
 * @...: a variable number to be printed
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums. int);
		if (index != (n - 1) && seperator != NULL)
		printf("%s", seperator);
	}
	print("\n");

	va_end(nums);

}
