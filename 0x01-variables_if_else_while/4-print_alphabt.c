#include <stdio.h>
/**
 * main - Starting point
 * Return: always return 0
 */
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
{
	if (a == 'q' || a == 'e')
{
	continue;
}
        putchar(a);
	return (0);
}
