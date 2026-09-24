#include<stdio.h>

int main()
{
	int i , j;
	int num = 1;

	for(i=1; i<=10; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%3d",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
