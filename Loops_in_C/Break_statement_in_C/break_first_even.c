#include<stdio.h>

int main()
{
	int arr[6] = { 3,7,9,12,15,20};
	int i;

	for(i=0; i<6; i++)
	{
		if(arr[i]%2 == 0)
		{
			printf("First even number : %d\n", arr[i]);
		        break;
		}
	}
     
     return 0;
}     
