#include<stdio.h>

int calculateSum(int arr[], int size)
{
	int i;
	int sum = 0;

	for(i=0; i<size; i++)
	{
		sum = sum + arr[i];
	}

	return sum;
}

int main()
{
	int number[] = {10,20,30,40,50};
	int size = 5;
	int result;

	result = calculateSum(number,5);

	printf("Sum = %d",result);

	return 0;

}
