#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 Always (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i <= 56; i++)
{
for (j = 49; j <= 57; j++
{
if (i < j)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
