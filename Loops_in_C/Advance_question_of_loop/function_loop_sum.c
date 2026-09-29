#include<stdio.h>

int calculatesum(int n)
{
	int i;
	int sum = 0;

	for( i=1; i<=n; i++)
	{
		sum = sum + i;
	}

	return sum;
}

int main()
{
	int n;
	int result;

	printf("Enter a number : ");
	scanf("%d",&n);

	result = calculatesum(n);

	printf("Sum = %d",result);

	return 0;
}
