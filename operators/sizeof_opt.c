#include<stdio.h>

int main()
{
	int a = 10;
	float b = 5.5;
	char c = 'A';
	double d = 10.5;

	printf("size of int = %zu bytes\n", sizeof(a));
        printf("size of float = %zu bytes\n", sizeof(b));
	printf("size of char = %zu bytes\n", sizeof(c));
	printf("size of double = %zu bytes\n", sizeof(d));


	return 0;

}




