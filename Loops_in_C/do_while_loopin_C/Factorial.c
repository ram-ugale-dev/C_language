#include<stdio.h>

int main()
{
	int n, i = 1;
	int factorial = 1;

	printf("Enter a number : ");
	scanf("%d",&n);

	if(n < 0)
	{
		printf("Factorial is not Define for Negative number");
	}
	
	if(n == 0)
	{
		factorial = 1;
	}

	else
	{
		do
		{
			factorial = factorial * i;
			i++;
		}

		while(i<=n);
	}
              printf("Factorial = %d\n",factorial);
      	      return 0;
}

