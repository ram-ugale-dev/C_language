#include<stdio.h>

int main()
{

	int i, j, n, k;

	printf("Enter a number of rows: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		int num=1;
		for(k=0; k<n-i-1; k++)
		{
		    printf(" ");
		}
               
                for(j=0; j<=i; j++)
		{

	            printf("%d ",num);

                   num = num * (i-j) / (j+1);
                }
                  
               printf("\n");
	}
       
         return 0;
}	 
