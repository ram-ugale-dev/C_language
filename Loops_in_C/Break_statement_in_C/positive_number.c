#include<stdio.h>

int main()
{
	int arr[6] = {-5,-10,-12,4,8,15};
	int i;


	for(i=0; i<6; i++)
	{
		if(arr[i]>0)
		{
			printf("First positive number is:%d", arr[i]);
			break;
		}
	}

	return 0;
}
