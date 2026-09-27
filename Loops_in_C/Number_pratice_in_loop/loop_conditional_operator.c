#include<stdio.h>

int main()
{
	int i;

	for(i=1; i<=5; i++)
	{
		printf("%d is %s\n",i,(i%2==0)? "Even" : "odd");

	}

	return 0;
}

