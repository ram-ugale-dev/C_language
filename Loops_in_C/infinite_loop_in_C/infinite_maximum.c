#include<stdio.h>

int main()
{
	int num;
	int max=0;
	int first=1;

	for(;;)
	{
		printf("Enter a number (0 to stop): ");
		scanf("%d",&num);

		if(num==0)
		{
			break;
		}

		if(first==1)
		{
			max = num;
			first = 0;
		}

		else if(num>max)
		{
			max = num;
		}

	}

	if(first==0)
	{
		printf("maximum = %d\n",max);
	}
	else
	{
		printf("No number entered.\n");
	}

	return 0;
}
