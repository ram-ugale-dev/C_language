#include<stdio.h>

int main()
{
	int target , i;

	printf("Enter a number to search (1 to 10): ");
	scanf("%d",&target);

	for(i=1; i<=10; i++)
	{
		if(i==target)
		{
		   printf("Number found : %d\n",target);
		   break;
		}
	}

	if(i>10)
	{
		printf("number not found\n");
	}
	return 0;
}

