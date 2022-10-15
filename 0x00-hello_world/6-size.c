#include <stdio.h>
/**
 * main- print out size of data types in c
 * Return: 0
 * zubairir code
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int f;
	float e;

	printf("Size of a char:%lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(f));
	printf("Size of a float:%lu byte(S)\n", (unsigned long)sizeof(e));
	return (0);
}
