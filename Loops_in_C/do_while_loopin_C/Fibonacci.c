#include<stdio.h>

int main()
{
	int n, i = 1;
	int a=0, b=1, next;

	printf("Enter a number : ");
	scanf("%d",&n);

	if(n<=0)
	{
		printf("Enter a Positive number.\n");
		return 1;
	}

		do
		{
			printf("%d ", a);

			next = a + b;
			a = b;
			b = next;

		}
		while(i<=n);

			printf("\n");
	return 0;
}

