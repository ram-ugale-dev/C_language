#include<stdio.h>

int main()
{

	int num;
	int sum=0;

	for(;;)
	{
		printf("Enter a Number (0 to exit ): ");
		scanf("%d",&num);

		if(num==0)
		{
			break;
		}

		sum = sum + num;

	}
	 
	printf("Total Sum = %d", sum);

	return 0;
}
