#include <stdio.h>
/**
 * main - starting point
 *
 * Return: always return 0
 */
int main(void)
{
int b, c, d;
for (b = 48; b < 58; b++)
{
for (c = b; c < 58; c++)
{
for (d = c; d < 58; d++)
{
if (b == c || c == d || b == d)
{
continue;
}
putchar(b);
putchar(c);
putchar(d);
if (b == 55 && c == 56 && d == 57)
{
break;
}
else
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
