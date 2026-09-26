#include<stdio.h>

int main()
{ 
	int arr[5] = { 10,20,30,40,50};
	int target , i;

	printf("Enter a number to search : ");
	scanf("%d",&target);

	for(i=0; i<5; i++)
	{
		if(arr[i]==target)
		{
			printf("Number found at index : %d", i);
			break;
		}
	}

	if(i==5)
	{
		printf("Number is not found.\n");
	}

	return 0;
}

