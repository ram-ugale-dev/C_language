#include<stdio.h>

int main()
{
	int num;

	printf("Enter a number(-1 to stop): ");

	while(1)
	{
		scanf("%d",&num);

		if(num==-1)
		{
			break;
		}

		printf("You entered :%d\n",num);
	}

	return 0;
}
