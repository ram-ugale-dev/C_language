#include<stdio.h>

int main()
{
	int arr[5] = {10,20,30,40,50};
	int i;
	int search;
	int found = 0;


	printf("Enter number to search : ");
	scanf("%d",&search);

	for(i=0; i<5; i++)
	{
		if(arr[i]==search)
		{
			found = 1;
			break;
		}
	}

	if(found=1)
	{
		printf("Element found at index :%d",i);
	}
	else
	{
		printf("Element not found.\n");
	}

	return 0;
}
