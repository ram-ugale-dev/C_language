#include<stdio.h>


int getNumber()
{
	int num = 50;

	return num;
}

int main()
{
	int result;

	result = getNumber();

	printf("The returned number is :%d\n", result);

	return 0;
}
