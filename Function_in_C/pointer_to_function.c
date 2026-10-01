#include<stdio.h>

void displayNumber(int *ptr)
{
	printf("Number = %d\n",*ptr);

}

int main()
{
	int num = 45;

	displayNumber(&num);

	return 0;
}
