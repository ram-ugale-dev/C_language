#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int largest;

	largest = (a > b) ? a : b;

	printf("Largest number = %d\n", largest);

	return 0;

}
