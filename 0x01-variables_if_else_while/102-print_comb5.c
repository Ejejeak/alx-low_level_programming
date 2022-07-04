#include <stdio.h>
/**
 * main - starting point
 *
 * Return: always return 0
 */
int main(void)
{
int a, b;
for (a = 0; b <= 99; b++)
{
for (a = b; a <= 99; a++)
{
if (a != b)
{
putchar(b / 10 + 48);
putchar(b % 10 + 48);
putchar(' ');
putchar(a / 10 + 48);
putchar(a % 10 + 48);
if (b * 100 + a != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
