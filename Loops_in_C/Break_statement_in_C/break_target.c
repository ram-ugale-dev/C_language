#include<stdio.h>


int main()
{
	int arr[6] = {10,20,30,40,50,60};
	int target, i;

	printf("Enter a Target number: ");
	scanf("%d",&target);

	for(i=0; i<6; i++)
	{
		if(arr[i] == target)
		{
			printf("Target number found at index :%d",i);
			break;
		}
	}

	if(i==6)
	{
		printf("Target number not found.\n");
	}
return 0;
}
