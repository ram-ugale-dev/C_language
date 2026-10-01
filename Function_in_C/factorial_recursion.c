#include<stdio.h>


int factorial(int n)
{

	// Base condition
	
	if(n==0 || n==1)
	{
		return 1;
	}

	return n*factorial(n-1);
}

int main()
{
	int number = 5;
	int result;

	result = factorial(number);

	printf("Factorial of %d = %d\n",number,result);

	return 0;
}
