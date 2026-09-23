#include<stdio.h>

int main()
{
	int n , i = 1;

	printf("Enter n :");
	scanf("%d",&n);


	while(i <= n)
	{

		if(n%2==0)
		{
			printf("%d is Even\n", i);
		}
		else
		{
			printf("%d is Odd\n",i);
		}
	}
	return 0;
}
