#include <stdio.h>
/**
 * main - To print size of data type in c
 * code written by zubair
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int dd;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(dd));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
