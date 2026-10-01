#include<stdio.h>

// fuction declaration

int add(int a, int b);

int main()
{
	int num1, num2, result;

	printf("Enter a First number: ");
	scanf("%d",&num1);

	 printf("Enter a Second number: ");
         scanf("%d",&num2);

	 result = add(num1, num2);

	 printf("Sum = %d\n", result);

	 return 0;
}

int add(int a, int b)
{
	return a+b;
}

