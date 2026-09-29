#include<stdio.h>

int main()
{
	int arr[3][3] = {

		{10,15,20},
		{25,30,35},
		{40,45,50}
	};

	int i, j;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(arr[i][j]%2==0)
			{
				printf("%d ",arr[i][j]);
			}
		}
	}

	printf("\n");

	return 0;
}
