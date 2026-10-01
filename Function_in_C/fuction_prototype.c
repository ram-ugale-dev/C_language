#include<stdio.h>


// Function Prototype

int add(int a, int b);

int main()
{
	int result;

	result = add(10,20);

	printf("Sum = %d\n",result);

	return 0;

}

//Function defination

int add(int a,int b)
{
	return a+b;
}

