#include<stdio.h>

int main()
{
	int i , j, n ,k;  //k used for space
	
	printf("Enter number of rows: ");
	scanf("%d",&n);

	//code for upper half

	for(i=1; i<=n; i++)
	{
		for(k=1; k<=n-i; k++)
		{
			printf(" ");
		}

		for(j=1; j<=2*i-1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	//code for lower half
	
           
        for(i=n; i>=1; i--)
        {
                for(k=1; k<=n-i; k++)
                {
                        printf(" ");
                }

                for(j=1; j<=2*i-1; j++)
                {
                        printf("*");
                }

                printf("\n");
        }

	return 0;
}

