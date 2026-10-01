#include<stdio.h>

int sumDigits(int n)
{
	//Base condition
	
	if(n==0)
	{
		return 0;
	}

	// Recursion call
	
	return (n%10) + sumDigits(n/10);

}

int main()
{
	int number = 12345;
	int result;

	result = sumDigits(number);

	printf("Sum of Digits = %d\n",result);

	return 0;
}
