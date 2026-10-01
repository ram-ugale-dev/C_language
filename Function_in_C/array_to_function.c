#include<stdio.h>

void displayArray(int arr[],int size)
{
	int i;

	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");
}

int main()
{
	int number[] = {10,20,30,40,50};
	int size = 5;

	displayArray(number,size);

	return 0;

}

