#include<stdio.h>

int main()
{
	int arr[5] = {10,25,36,5,38};
	int i;
	int max = arr[0];
	int min = arr[0];

	for(i=0; i<5; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}

		if(arr[i]<min)
		{
			min = arr[i];

		}

	}

	printf("Maximum = %d\n",max);
	printf("Minimum = %d\n",min);

	return 0;
}
