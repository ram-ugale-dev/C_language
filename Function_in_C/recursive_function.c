#include<stdio.h>

void countDown(int n)
{
	//base condtion
	
	if(n==0)
	{
		return;
	}

	printf("%d\n",n);

	//Recursion call
	
	countDown(n-1);
}

int main()
{
	countDown(5);

	return 0;
}

