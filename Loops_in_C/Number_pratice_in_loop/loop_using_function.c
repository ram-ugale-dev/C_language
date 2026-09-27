#include<stdio.h>


void printNumber(int n)
{
	int i;

	for(i=1; i<=n; i++)
	{
		printf("%d ",i);
	}
}
  

int main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d",&n);

	printNumber(n);

	return 0;

}

