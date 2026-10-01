#include<stdio.h>

int reverseNumber(int n, int revs)
{
	// BASE condition
	
	if(n == 0)
	{
		return revs;
	}

	// Recursion condiition
	
	return reverseNumber(n/10, revs * 10 + (n % 10));
}

int main()
{
	int number = 345678;
	int result;

	result = reverseNumber(number,0);

	printf("Original Number = %d\n", number);
	printf("Reverse Number = %d\n",result);

	return 0;
}

