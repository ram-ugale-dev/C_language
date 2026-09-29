#include<stdio.h>

int main()
{
	int i;

	for(i=1; i<=30; i++)
	{
		if((i%2==0 && i%3==0) || i==25)
		{
			printf("%d ",i);

		}
	}

	return 0;
}
