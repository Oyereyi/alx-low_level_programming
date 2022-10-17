#include <stdio.h>
/**
 * main - print numbers of base 16 in lower case
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char b;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (b = 'a'; b <= 'f'; b++)
		putchar(b);

	putchar('\n');

	return (0);
}
