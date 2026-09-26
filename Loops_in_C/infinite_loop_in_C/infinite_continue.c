#include<stdio.h>

int main()
{
	int i =1;

	for(;;)
	{
		if(i=5)
		{
			i++;
			continue;
		}

		printf("%d\n",i);

		i++;

		if(i>10)
		{
			break;
		}

	}

	return 0;
}
