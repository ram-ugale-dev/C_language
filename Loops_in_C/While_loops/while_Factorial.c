#include<stdio.h>

int main()
{
	int n;
	int i = 1;
	int factorial=1;


	printf("Enter a number :");
	scanf("%d",&n);

	if(n==0)
	{
		printf("Factorial is not definr for negative number ");
	}
	else
	{
		while(i<=n)
		{
			factorial = factorial * i;
			i++;
		}
		printf("Factorial = %d", factorial);
	}

		return 0;
}
