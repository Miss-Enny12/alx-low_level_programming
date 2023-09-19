#include <stdio.h>
/**
 * print_rev - function name
 * @s: funtion parameter
 */

void print_rev(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	for (a = count - 1; a >= 0; a--)
{
	putchar(s[a]);
}
	putchar('\n');
}

