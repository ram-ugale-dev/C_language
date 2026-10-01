#include<stdio.h>

// Function with multiple Argument.


int addThreeNumber(int a, int b, int c)
{
	int sum ;

	sum = a + b + c;

	return sum;
}

int main()
{
	int result;

	result = addThreeNumber(10,20,30);

	printf("Sum = %d\n",result);

	return 0;
}
