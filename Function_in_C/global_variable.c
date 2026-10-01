#include<stdio.h>

// Global variable
int number = 100;


void showNumber()
{
	printf("Inside Function : %d\n",number);
}

int main()
{
	printf("Inside main : %d\n",number);

	showNumber();

	return 0;
}
