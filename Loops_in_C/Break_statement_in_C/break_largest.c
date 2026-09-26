#include<stdio.h>

int main()
{
	int arr[6] = { 12,45,32,67,56,22};
	int largest = 67;

	for(int i=0; i<6; i++)
	{
		if(arr[i] == largest)
		{
			printf("Largest number found :%d\n", arr[i]);
			break;
		}
	}

	return 0;
}

