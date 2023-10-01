#include "main.h"
/**
 * _prints_rev_recursion - main function
 * @s: function parameter
 * Return: Voidu
 */
void _print_rev_recursion(char *s)
{
	if (*s)
{
	_print_rev_recursion(s + 1);
	putchar(*s);
}
}
