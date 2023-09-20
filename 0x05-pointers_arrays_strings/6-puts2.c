#include <stdio.h>
/**
 * puts2 - function name
 * @str: function parameter
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
{
	if (a % 2 == 0)
		putchar(str[a]);
}
	putchar('\n');
}
