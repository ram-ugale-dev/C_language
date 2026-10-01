#include<stdio.h>

// Global variable
int number = 100;

void showNumber()
{
	//Local variable
	int number = 50;

	printf("Local variable = %d\n",number);
}

int main()
{
	printf("Global variable = %d\n",number);

	showNumber();

	return 0;

}
