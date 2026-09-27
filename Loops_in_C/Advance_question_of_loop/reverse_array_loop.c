#include<stdio.h>

int main()
{

	int arr[5] = {10,20,30,40,50};
	int i;

	printf("Original Array: ");

	for(i=0; i<5; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\nReverse Array: ");

	for(i=4; i>=0; i--)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
