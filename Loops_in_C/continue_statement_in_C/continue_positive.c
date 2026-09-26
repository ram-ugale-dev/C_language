#include<stdio.h>

int main()
{

	int arr[6] = {10,-5,20,-15,30,-25};
	int i;

	for(i=0; i<6; i++)
	{
		if(arr[i]<0)
		{
			continue; // continue to skip negative number 
        	}

		printf("%d\n",arr[i]);
	}

	return 0;
}
