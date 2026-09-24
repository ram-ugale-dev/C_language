#include<stdio.h>

int main()
{
	int i,j;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			int num = (i-1)*5 + j;

			if(num%2 ==0)
			{
		          	printf("%d is Even\n",num);
			}
			else
			{
				printf("%d is Odd\n",num);
			}
		}
	}

	return 0;
}


