#include<stdio.h>

void add(int a,int b)
{
	printf("Addition = %d\n",a+b);
}

void Subtract(int a,int b)
{
        printf("Subtraction = %d\n",a-b);
}

void Multiply(int a,int b)
{
        printf("Multiplication = %d\n",a*b);
}

void divide(int a,int b)
{
	if(b != 0)
	{
        printf("Division = %d\n",a/b);
	}
	else
	{
		printf("Cannot divide by zero\n");
	}
}

int main()
{
	int a = 20;
	int b = 5;

	add(a,b);
	Subtract(a,b);
	Multiply(a,b);
	divide(a,b);

	return 0;
}

