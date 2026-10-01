#include<stdio.h>

void changeValue(int number)
{
	 number = 100;

	printf("Inside function : %d\n",number);
}

int main()
{
	int number = 10;

	printf("Before function Call: %d\n",number);

	changeValue(number);

	printf("After Function call : %d",number);

	return 0;
}
