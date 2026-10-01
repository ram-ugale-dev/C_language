#include<stdio.h>

int fibonacci(int n)
{
	//Base condition
	
	if(n==0)
	{
		return 0;
	}

	if(n==1)
	{
		return 1;
	}

	//Recursion call
	
	return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int i = 1;
	int n = 10;

	for(i=0; i<=n; i++)
	{
		printf("%d ",fibonacci(i));
	}

	printf("\n");

	return 0;
}


