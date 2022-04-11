#include <stdio.h>
/**
 * main - Entry point print
 * Return: 0 Always (Success)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
