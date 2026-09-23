#include<stdio.h>

int main()
{
	int n;
	int factorial = 1;

	printf("Enter number : ");
	scanf("%d",&n);

	if(n<0)
	{
		printf("Factorail is not define for Negative number");

		return 1;
	}

	for(int i=1; i<=n; i++)
	{
		factorial = factorial * i;
	}

	printf("Factorial = %d\n",factorial);

	return 0;
}

