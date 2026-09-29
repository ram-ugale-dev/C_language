#include<stdio.h>

int main()
{
	int matrix[2][3] = {
		{10,20,30},
		{40,50,60}
	};

	int i , j;
	int sum = 0;

	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			sum = sum + matrix[i][j];
		}
	}

	printf("Matrix\n");

	for(i=0; i<2; i++)
        {
                for(j=0; j<3; j++)
                {
                        printf("%d ",matrix[i][j]);
                }
		printf("\n");
        }

	printf("Sum = %d",sum);

	return 0;
}
