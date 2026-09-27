#include<stdio.h>

int main()
{
        int i,j,n,space;

        printf("Enter a number of rows: ");
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
		for(space=1; space<=n-i; space++)
		{
			printf(" ");
		}
                // Increasing Numbers

                for(j=1; j<=i; j++)
                {
                        printf("%d ",j);
                }

                 // Decreasing Numbers

                for(j=i-1; j>=1; j--)
                {
                        printf("%d ",j);
                }

                printf("\n");

        }

        return 0;
}

