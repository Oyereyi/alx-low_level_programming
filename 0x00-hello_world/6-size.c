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

	printf("Size of a char:%ld byte(S)\n", sizeof(a));
	printf("Size of an int: %ld byte(S)\n", sizeof(b));
	printf("Size of a long: %ld byte(S)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(S)\n", sizeof(f));
	printf("Size of a float:%ld byte(S)\n", sizeof(e));
	return (0);
}
