#include<stdio.h>

int main()
{

	int num;
	int sum=0;
	int count=0;
	float average;

	for(;;)
	{
		printf("Enter a number (0 to stop ): ");
		scanf("%d",&num);

		if(num==0)
		{
			break;
		}

		sum = sum + num ;
		count++;

	}

	if(count>0)
	{
		average = (float)sum/ count;
		printf("Average = %.2f",average);
	}

	else
	{
		printf("No number entered.\n");
	}

	return 0;

}
