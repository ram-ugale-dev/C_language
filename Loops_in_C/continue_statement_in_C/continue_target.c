#include<stdio.h>

int main()
{

        int arr[6] = {10,20,30,40,50,60};
        int target,i;

	printf("Enter a target number to skip: ");
	scanf("%d",&target);

        for(i=0; i<6; i++)
        {
                if(arr[i]==target)
                {
                        continue; // continue to skip target number 
                }

                printf("%d\n",arr[i]);
        }

        return 0;
}

