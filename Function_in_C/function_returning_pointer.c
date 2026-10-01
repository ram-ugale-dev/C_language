#include<stdio.h>

int *getNumber()
{
	static int number = 100;

	return &number;
}

int main()
{
	int *ptr;

	ptr = getNumber();
	
	printf("Value = %d\n",*ptr);

	return 0;
}
